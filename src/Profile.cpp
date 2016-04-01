/*
 * Profile.cpp
 *
 *  Created on: Mar 27, 2016
 *      Author: Elijah
 */
#include "Profile.h"
#include <string>
using namespace std;
Profile::Profile(string n)
{

	fn = n + ".profile";
}

void Profile::open(void)
{
	 fstream file(fn,ios::app);



}

void Profile::write(string s)
{

}




