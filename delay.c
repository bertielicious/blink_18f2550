#include <p18f2550.h>
void delay(void)
{
unsigned int i = 0;
while (i<5000)
    {
        i++;
    }
}