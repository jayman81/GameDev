//============================================================================
// Name        : FileIO.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream> //File IO
#include <sstream> // StringStream
//#include <chrono>
#include <time.h>
#include <string>
#include <vector>
#include <stdlib.h> // atoi
#include <cstdlib>

#include "Weapon.hpp"

//using namespace std;

const std::string currentDate();

//typedef unsigned long int uint16_t;
//typedef unsigned short uint8_t;


int main() {
	std::stringstream _ss;
	std::string readBuf;
	char delimiter = ';';
	std::string delimiterEOL = "#";
	std::vector <Weapon> weaponType;
	Weapon activeWeapon (0,0,0,"",0,0,0,0,0);
	uint8_t numberOfLines = 0;

	std::ifstream fHandlerWeapons("weapon");
	if (!fHandlerWeapons.is_open()) {
		printf("file not found!\n");
		exit(EXIT_FAILURE);
	}

	while (getline (fHandlerWeapons,readBuf)) {
		printf("ID-> %d\n",atoi(readBuf.substr(0, readBuf.find(delimiter)).c_str()));
		weaponType[numberOfLines];
		activeWeapon.setID(atoi(readBuf.substr(0, readBuf.find(delimiter)).c_str()));

		printf("Type-> %d\n",atoi(readBuf.substr(2, readBuf.find(delimiter)).c_str()));
		printf("SubType-> %d\n",atoi(readBuf.substr(4, readBuf.find(delimiter)).c_str()));
		printf("Name-> %s\n",readBuf.substr(6, readBuf.find(delimiter)).c_str());

		//activeWeapon.setID(atoi(readBuf.substr(0, readBuf.find(delimiter)).c_str()));
		//weaponType.push_back(activeWeapon);
		++numberOfLines;
	}


	printf("number of lines in weapon file: %d\n",numberOfLines);
	printf("Size of Vector %d\n", weaponType.size());

	std::cout << "ID in Vector " << weaponType.at(0) << ":" << activeWeapon.getID() << std::endl;
	printf("ID in Vector %d: %d\n", weaponType[1], activeWeapon.getID());
	printf("ID in Vector %d: %d\n", weaponType[2], activeWeapon.getID());
	printf("ID in Vector %d: %d\n", weaponType[3], activeWeapon.getID());

	while(numberOfLines!=0) {

		printf("vector entries: %d\n",weaponType[numberOfLines]);
		numberOfLines--;
	}


 /*

			activeWeapon.type = atoi(readBuf.substr(1,readBuf.find(delimiter)).c_str());
			activeWeapon.subType = atoi(readBuf.substr(2,readBuf.find(delimiter)).c_str());
			activeWeapon.name = readBuf.substr(6,readBuf.find(delimiter));
			std::cout << readBuf << "\n";
			i++;

	fHandlerWeapons.close();

	std::cout << "ID: " << activeWeapon.id << "\n";
	std::cout << "Type: " << activeWeapon.type << "\n";
	std::cout << "SubType: " << activeWeapon.subType << "\n";
	std::cout << "Name: " << activeWeapon.name << "\n";

*/

	//_ss.str("");
	_ss << currentDate()
   		<< " - "
        << "wo wos dazua\n";

	//fileHandler.open ("logging.txt", std::ios_base::app);
	//fileHandler << _ss.str();

	//fileHandler.close();

	return 0;
}


const std::string currentDate() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
	// for more information about date/time format
	strftime(buf, sizeof(buf), "%Y-%m-%d:%X", &tstruct);

	return buf;
}




