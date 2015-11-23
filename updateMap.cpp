// updateMap.cpp - Updates hashmap

void PasswordNarrower::updateMap(Modifiers mod, bool val) {

std::map<Modifiers, bool>::iterator i = modifiers.find(mod);

	if (i != modifiers.end())
	i->second = val;

}

