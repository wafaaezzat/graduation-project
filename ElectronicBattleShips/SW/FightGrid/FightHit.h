/*
 * FightHit.h
 *
 *  Created on: Dec 31, 2020
 *      Author: Abdallah Helal
 */

#ifndef FIGHTGRID_FIGHTHIT_H_
#define FIGHTGRID_FIGHTHIT_H_

typedef	enum hitType_e{
	Strike,
	Miss
}hitType_t;

char FightHit(hitType_t hitType,char Location);

#endif /* FIGHTGRID_FIGHTHIT_H_ */
