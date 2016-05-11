//////////////////////////////////////////////////////////////////////////
#include "MLX90614.h"
#include <Wire.h>

// RAM
#define MLX90614_RAWIR1  0x04
#define MLX90614_RAWIR2  0x05
#define MLX90614_TA      0x06  // Ambient Temperature
#define MLX90614_TOBJ1   0x07  // Object Temperature 1
#define MLX90614_TOBJ2   0x08  // Object Temperature 2
// EEPROM
#define MLX90614_TOMAX   0x20  // Object Temperature Max.
#define MLX90614_TOMIN   0x21  // Object Temperature Min.
#define MLX90614_PWMCTRL 0x22
#define MLX90614_TARANGE 0x23
#define MLX90614_EMISS   0x24
#define MLX90614_CONFIG  0x25
#define MLX90614_ADDR    0x2E  // I2C Address
#define MLX90614_ID1     0x3C
#define MLX90614_ID2     0x3D
#define MLX90614_ID3     0x3E
#define MLX90614_ID4     0x3F

static uint8_t _crc8( uint8_t *data, uint16_t len );

using namespace esl;

MLX90614::MLX90614( uint8_t slave_addr )
  : i2c_addr(slave_addr), crc_error(false)
{
   // empty
}

void MLX90614::init( ) {
  digitalWrite( SDA, 0 ); // disable pull-up on SDA
  digitalWrite( SCL, 0 ); // dsiable pull-up on SCL
}

uint8_t MLX90614::readSlaveAddress() {
  uint8_t addr = read_reg( MLX90614_ADDR );
  return addr;
}

uint16_t MLX90614::read_reg( uint8_t reg_addr ) {
  uint16_t ret;
  uint16_t count = 0;
  crc_error = false;
  Wire.beginTransmission( i2c_addr );
  Wire.write( reg_addr );
  Wire.endTransmission(false);
  Wire.requestFrom( i2c_addr, (uint8_t) 3 );
  uint8_t data[6];
  while( Wire.available() < 3 ) {
     if ( count++ > 100 ) break;
     delayMicroseconds(100);
  } 
  data[0] = (i2c_addr << 1);
  data[1] = reg_addr;
  data[2] = (i2c_addr << 1) | 1;
  for (uint8_t i=0; i < 3; i++) {
    data[i+3] = Wire.read();
  }
  Wire.endTransmission();
  ret = data[3];       // low byte
  ret |= data[4] << 8; // high byte
  if ( _crc8( data, 5 ) != data[5] ) {
    // Serial.println( "CRC error!");
    ret = 0;
    crc_error = true;
  }
  return ret;
}

float MLX90614::readAmbientTemperature() {
  //temp = read_reg( MLX90614_TA );
  //temp *= 0.02; // 0.02 degrees per LSB (measurement resolution of the MLX90614)
  //temp -= 273.15; // Kelvin
  uint32_t t = read_reg( MLX90614_TA );
  return ((t*2) - 27315) /100.0;
}

float MLX90614::readObjectTemperature() {
  uint32_t t = read_reg( MLX90614_TOBJ1 );
  return ((t*2) - 27315) /100.0;
}

static uint8_t _crc8( uint8_t *data, uint16_t len ) {
    uint8_t crc = 0x00;
    uint8_t b;
    while ( len-- > 0 ) {
       b = *data++;
       b = b ^ crc;
       for (uint8_t i=0; i < 8; i++) {
         if (b & 0x80)
            b = (b << 1) ^ 0x07;
         else
            b = (b << 1);
       }
       crc = b;
    }
    return crc;
}
//////////////////////////////////////////////////////////////////////////
