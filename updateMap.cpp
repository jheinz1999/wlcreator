// updateMap.cpp - Updates hashmap

void PasswordNarrower::updateMap(Modifiers mod, bool val) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod); // searches for key

	if (i != modifiers.end())
	i->second = val; // adds value

}

