/*************************************************** 
  This is a library for the Adafruit Thermocouple Sensor w/MAX31855K

  Designed specifically to work with the Adafruit Thermocouple Sensor
  ----> https://www.adafruit.com/products/269

  These displays use SPI to communicate, 3 pins are required to  
  interface
  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/


class Adafruit_MAX31855 {
 public:
  Adafruit_MAX31855(int8_t sclk_pin, int8_t cs_pin, int8_t miso_pin);

  double readInternal(void);
  double readCelsius(void);
  double readFarenheit(void);
  uint8_t readError();

 private:
  int8_t _sclk, _miso, _cs;
  uint32_t spiread32(void);
};
