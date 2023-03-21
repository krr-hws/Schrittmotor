#include "mbed.h"

PortOut motor(PortC, 0b1111);
unsigned char schritt[] = {0b0011, 0b0110, 0b1100, 0b1001};

int main()
{
    while (true) {
        //testkommentar
        for(int i = 0; i < 4; i++){
            motor = schritt[i];
            ThisThread::sleep_for(500ms);
        }
    }
}
