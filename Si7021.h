#include "mbed.h"

void crc8(unsigned char *crc, unsigned char m);

class Si7021{ // prototype of "Si7021" class
    public:
    /** Create Si7021 interface, initialize with selected I2C port and address.
    *
    * @param i2c I2C device pointer
    * @param addr Device address(default=0x80)
    */
    // prototype of Si7021 constructor
    Si7021(I2C* i2c,int addr);
    /* Prototypes of member functions
    * Get RH and Temperature from Si7021.
    * @param RH_val, prevTemp_val and temp_val return variable pointer
    * @return 0 on success (ack), or non‐0 on failure (nack)
    */
    bool getRH(float* RH_val);
    bool getPrevTemp(float* temp_val);
    bool getTemp(float* temp_val1);
    private: // start of private section
    // private MEMBER variables declaration
    I2C* i2c; // Construction of an instance
    // of type i2c pointer of class I2C
    int i2caddress; // declaration of an integer
    //NB: please note the mandatory ';' at the end of the prototype!!
};