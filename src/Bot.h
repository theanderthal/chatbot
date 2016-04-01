/*
 * Bot.h
 *
 *  Created on: Mar 26, 2016
 *      Author: Elijah
 */

#ifndef BOT_H_
#define BOT_H_
#include "Profile.h"
class Bot
{
	Profile p;
	bool train;
	bool talk;

	void converse();
public:
	Bot();
	void salute();

};




#endif /* BOT_H_ */
