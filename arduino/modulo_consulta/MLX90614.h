//////////////////////////////////////////////////////////////////////////
// Author: RSP @ Embedded System Lab (ESL), KMUTNB, Thailand
// File: MAX6675.h
// Last Modified: 2014-06-24
// Note:
//   A C++ class for Arduino that provides methods for read ambient
//   and object temperature values from the MLX90614 Infrared Thermometer chip.
//////////////////////////////////////////////////////////////////////////
#ifndef __MLX90614_H
#define __MLX90614_H

#include <Arduino.h>
#include <Wire.h>

namespace esl {
  class MLX90614 {
    public:
      MLX90614( uint8_t slave_addr = 0x5A );
      void init();
      uint8_t readSlaveAddress();
      float readAmbientTemperature();
      float readObjectTemperature();
      uint16_t read_reg( uint8_t reg_addr );
      inline boolean is_crc_error() { return crc_error; }
      
    private:
      boolean crc_error;
      uint8_t i2c_addr;

  }; // end class
} // end namespace

#endif // __MLX90614_H
//////////////////////////////////////////////////////////////////////////
