/*
 * FightHit.c
 *
 *  Created on: Dec 31, 2020
 *      Author: Abdallah Helal
 */


#include "FightHit.h"

char FightHit(hitType_t hitType,char Location){
	char Result;

	if(hitType == Strike){

		Result=0x80|Location;
	}
	else if(hitType == Miss){
		Result=0x40|Location;
	}
	else{
		Result=0 ;
   	}


return Result;
}
