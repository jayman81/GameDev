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

//using namespace std;

const std::string currentDate();

typedef unsigned long int uint16_t;
typedef unsigned short uint8_t;


typedef enum {
	sword1H = 0x00,
	sword2H,
	axe1H,
	axe2H,
	knife,
	stick,
	staff
} meleeWeapon_t;

typedef enum {
	melee = 0x00,
	range,
	wand,
	mage
}weaponType_t;

typedef struct {
	uint16_t id;
	uint8_t type;
	uint8_t subType;
	std::string name;
	uint16_t dmg;
	uint16_t weight;
	float speed;
	uint8_t hands;
	uint8_t ranged;
}weaponStats_s;

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	std::stringstream _ss;
	std::string readBuf;
	std::string delimiter = ";";
	size_t pos;

	weaponStats_s activeWeapon;

	std::ifstream fHandlerWeapons("weapon");
	if (fHandlerWeapons.is_open()) {



		while (getline (fHandlerWeapons,readBuf)) {
			()pos =
			activeWeapon.id = atoi(readBuf.substr(0,readBuf.find(delimiter)).c_str());
			activeWeapon.type = atoi(readBuf.substr(1,readBuf.find(delimiter)).c_str());
			activeWeapon.subType = atoi(readBuf.substr(2,readBuf.find(delimiter)).c_str());
			activeWeapon.name = readBuf.substr(6,readBuf.find(delimiter));
			std::cout << readBuf << "\n";
		}
		fHandlerWeapons.close();
	}

	std::cout << "ID: " << activeWeapon.id << "\n";
	std::cout << "Type: " << activeWeapon.type << "\n";
	std::cout << "SubType: " << activeWeapon.subType << "\n";
	std::cout << "Name: " << activeWeapon.name << "\n";



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




