
#include "main.h"


//-----------------------------------------------------------------------//


int main(void)
{
	DDRD = 0xFF;
	PORTD &= ~(1<<(PORTD2));	// �����
	USARTinit(); //207 -> 9600 ��� 16Mhz
	sei();
	while (1)
	{
		
	}
}
//-----------------------------------------------------------------------//



//-----------------------------------------------------------------------//
