#define F_CPU 8000000UL // internal 8 MHz clock speed
#include <avr/io.h>
#include <util/delay.h>
#include "main.h"
#include "OceanHit.h"
//#include "FightHit.h"
int main(void)
{
	DDRA=0xFF;
	PORTA=0;
	while(1)
	{
		OceanHit(Miss,D4);
		_delay_ms(3000);
		OceanHit(Miss,E3);
		_delay_ms(3000);
		OceanHit(Strike,F8);
		_delay_ms(3000);
		OceanHit(Miss,H1);
		_delay_ms(3000);
		OceanHit(Strike,B2);
		_delay_ms(3000);
		OceanHit(Miss,H2);
		_delay_ms(3000);


	}
return 0;
}


