/*
 * Weapon.hpp
 *
 *  Created on: Mar 8, 2018
 *      Author: jurgen
 */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_


#include <string>

class Weapon {
public:
	//Constructor
	Weapon(uint16_t id, uint8_t type, uint8_t subType, std::string name, uint16_t dmg, uint16_t weight, float speed, uint8_t hands, uint8_t ranged):
		_id(id), _type(type), _subType(subType), _name(name), _dmg(dmg), _weight(weight), _speed(speed), _hands(hands), _ranged(ranged){}

	//Getters
	uint16_t getID() const {return _id;}
	uint8_t getType() const {return _type;}
	uint8_t getSubType() const {return _subType;}
	std::string getName() const {return _name;}
	uint16_t getDmg() const {return _dmg;}
	uint16_t getWeight() const {return _weight;}
	float getSpeed() const {return _speed;}
	uint8_t getHands() const {return _hands;}
	uint8_t getRanged() const {return _ranged;}

	//Setters
	void setID(uint16_t value) {_id = value;}
	void setType(uint16_t value) {_type = value;}
	void setSubType(uint16_t value) {_subType = value;}
	void setName(std::string value){_name = value;}
	void setDmg(uint16_t value) {_dmg = value;}
	void setWeight(uint16_t value) {_weight = value;}
	void setSpeed(float value) {_speed = value;}
	void setHands(uint8_t value) {_hands = value;}
	void setRanged(uint8_t value) {_ranged = value;}

private:
	uint16_t _id;
	uint8_t _type;
	uint8_t _subType;
	std::string _name;
	uint16_t _dmg;
	uint16_t _weight;
	float _speed;
	uint8_t _hands;
	uint8_t _ranged;
};



#endif /* WEAPON_HPP_ */
