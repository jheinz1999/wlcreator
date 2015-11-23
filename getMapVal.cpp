// getMapVal.cpp - retrieves map value from hashmap

bool PasswordNarrower::getMapVal(Modifiers mod) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod);

	if (i != modifiers.end())
	return i->second;

}
