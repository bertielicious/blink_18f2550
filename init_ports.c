
#include <p18f2550.h>

void init_ports(void)
{
    TRISCbits.RC2 = 0;
    CCP1CON = 0x00;
}
