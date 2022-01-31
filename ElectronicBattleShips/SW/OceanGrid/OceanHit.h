/*
 * OceanGrid.h
 *
 *  Created on: Dec 30, 2020
 *      Author: Abdallah Helal
 */

#ifndef OCEANGRID_OCEANGRID_H_
#define OCEANGRID_OCEANGRID_H_


#define GenerateClock()			PORTA&=~(1<<PA5);\
								PORTA|=(1<<PA5)

#define SendOne()				PORTA|=(1<<PA6)

#define SendZero()				PORTA&=~(1<<PA6)

#define EnableLatch()			PORTA|=(1<<PA7)

#define DisableLatch()			PORTA&=~(1<<PA7)


typedef	enum hitType_e{
	Strike,
	Miss
}hitType_t;

void OceanHit(hitType_t hitType,char Location);

#endif /* OCEANGRID_OCEANGRID_H_ */
