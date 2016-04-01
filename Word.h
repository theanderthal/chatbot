/*
 * Word.h
 *
 *  Created on: Apr 1, 2016
 *      Author: Elijah
 */

#ifndef WORD_H_
#define WORD_H_
#include <string>
using namespace std;
class Word
{
	string word;
	int freq; // keeps track of how many times the word is used overall
	Profile p; // The Profile that the word is found in
public:
	Word(string s, Profile p);
	string toString();
	int getFrequency(Profile p);
};




#endif /* WORD_H_ */
