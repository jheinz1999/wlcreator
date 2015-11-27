// updateArgs.cpp - Updates hashmap

#include "passwordNarrower.hpp"
#include "modifiers.hpp"

#include <map>

void PasswordNarrower::updateArgs(Modifiers mod, bool val) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod); // searches for key

	if (i != modifiers.end())
	i->second = val; // adds value

}

