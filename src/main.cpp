#define F_CPU 1000000UL 

#include <avr/io.h>
#include <util/delay.h>
int count = 0;

int arr[10] ={0b00000110, 0b01011011, 0b01001111, 0b01100110, 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111, 0b00111111}; 
//               1          2             3          4           5             6         7 
int main(void)

{
	
	DDRB = 0b1111111;
    DDRD =  0b0000000;
    PORTD = 0b1111111;
	
    while (1) 
    {
        if (PIND == 0b1111110){
            count++;
            _delay_ms(200);
            PORTB = arr[count];
        }
        else if (PIND == 0b1111101)
        {
            count--;
             _delay_ms(200);
            PORTB = arr[count];
        }
    }
}
 