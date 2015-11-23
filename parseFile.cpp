// parseFile.cpp - Parses file

void PasswordNarrower::parseFile() {

std::ifstream i;

i.open(input.c_str());

std::string temp;

std::cout << "\nPASSWORD:\n\n";

	while (i >> temp) {

		if (temp.length() == length && getMapVal(Modifiers::Length)) {

			if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
			std::cout << temp << std::endl;

			else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
			std::cout << temp << std::endl;

			else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
			std::cout << temp << std::endl;

		}

		else if (temp.length() <= maxLength && temp.length() >= minLength && !getMapVal(Modifiers::Length)) {
			
			if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
			std::cout << temp << std::endl;

			else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
			std::cout << temp << std::endl;

			else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
			std::cout << temp << std::endl;

		}

	}

i.close();

}
