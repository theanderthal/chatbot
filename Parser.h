/*
 * Parser.h
 *
 *  Created on: Apr 1, 2016
 *      Author: Elijah
 */

#ifndef PARSER_H_
#define PARSER_H_
#include <fstream>
#include <string>
using namespace std;
class Parser
{
public:
	Parser();
	void parse(fstream &f,string s);
};



#endif /* PARSER_H_ */
