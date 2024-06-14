#include <stdint.h>
#include "GPIO_N_Init.h"
#include "Delay.h"

#define GPIO_N_DATA     (*((volatile uint32_t *)0x400643FCU)) // Port N Data

 int main(void)
 {
     GPIO_N_Init();

     while(1)
     {
         // Toggle LED
         GPIO_N_DATA ^= 0x02U;

         Delay(1000000);
     }
 }
