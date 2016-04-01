/*
 * Profile.h
 *
 *  Created on: Mar 26, 2016
 *      Author: theanderthal
 */
// class Profile saves commonly used words and phrases to a file to be p[arsed by the chatbot.
// profiles are kept relatively small due to the fact that a phrase is only saved if it used a certain number of times
#ifndef PROFILE_H_
#define PROFILE_H_
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Profile
{
	friend class Bot;

	//private member data
	string fn;
	fstream file;
	string name; // name associated with profile

public:
	Profile(string n);
	void open(void);
	void write(string s);
	bool exists(void); // checks whether a Profile has already been created for a user
	void getName(void);
	~Profile();


};




#endif /* PROFILE_H_ */
