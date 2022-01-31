/*
 * OceanHit.c
 *
 *  Created on: Dec 30, 2020
 *      Author: Abdallah Helal
 */
#include <avr/io.h>
#include "OceanHit.h"

void OceanHit(hitType_t hitType,char Location){
	char Result;
	int i;
	DisableLatch();
	if(hitType == Strike){

		Result=0x80|Location;
	}
	else if(hitType == Miss){
		Result=0x40|Location;
	}

	for (i=0;i<8;i++)
		{

			if (Result&128)
			{
				SendOne();
				GenerateClock();
			}

			else
			{
				SendZero();
				GenerateClock();
			}
		Result=Result<<1;
		}

	EnableLatch();

}
