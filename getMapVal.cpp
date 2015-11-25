// getMapVal.cpp - retrieves map value from map

bool PasswordNarrower::getMapVal(Modifiers mod) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod); // iterator

	if (i != modifiers.end())
	return i->second; // Returns boolean value

}
