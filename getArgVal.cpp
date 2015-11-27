// getArgVal.cpp - retrieves map value from map

#include "passwordNarrower.hpp"
#include "modifiers.hpp"

#include <map>

bool PasswordNarrower::getArgVal(Modifiers mod) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod); // iterator

	if (i != modifiers.end())
	return i->second; // Returns boolean value

}
