#include <stdint.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const* argv[])
{
    float tmp = -5570560.0;
    uint32_t data = 0;

    data = (uint32_t)roundf(tmp) & 0xffffff;

    printf("%f,%d,0x%x,data=0x%x\n",tmp,(int32_t)roundf(tmp),(uint32_t)roundf(tmp)&0xffffff,data);


    return 0;
}
