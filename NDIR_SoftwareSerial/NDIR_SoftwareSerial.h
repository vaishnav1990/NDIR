/*
Description:
This is a example code for Sandbox Electronics NDIR CO2 sensor module.
You can get one of those products on
http://sandboxelectronics.com

Version:
V1.1

Release Date:
2017-11-01

Author:
Tiequan Shao          info@sandboxelectronics.com

Lisence:
CC BY-NC-SA 3.0

Please keep the above information when you use this code in your project.
*/

#ifndef _NDIR_SOFTWARE_SERIAL_H_
#define _NDIR_SOFTWARE_SERIAL_H_

class NDIR_SoftwareSerial {
    public:
        NDIR_SoftwareSerial(uint8_t rx_pin, uint8_t tx_pin);

        uint32_t ppm;

        uint8_t  begin();
        uint8_t  measure();
        void     calibrateZero();

    private:
        SoftwareSerial serial;

        uint8_t  parse(uint8_t *pbuf);

        static uint8_t  cmd_measure[9];
        static uint8_t  cmd_calibrateZero[9];
};
#endif
