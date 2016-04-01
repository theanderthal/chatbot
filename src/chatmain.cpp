/*
 * chatmain.cpp
 *
 *  Created on: Mar 26, 2016
 *      Author: theanderthal
 */

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void BotMgr()
{
}

int main(int argc, char* argv[])
{
	try
	{
		string username;
		switch(argc)
		{
		case 1:
			cout << "Please enter your name" << endl;
			cin >> username;
			BotMgr();
		}
	}
	catch(...)
	{
		cout << "An unexpected Error occurred";
		exit(EXIT_FAILURE);
	}
	//cout << "h";
	return 0;
}

