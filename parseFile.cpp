// parseFile.cpp - Parses file

void PasswordNarrower::parseFile() {

std::ifstream i;

std::ofstream o;

i.open(input.c_str());

o.open(output.c_str());

std::string temp;

	if (getMapVal(Modifiers::Password))
	passwordInit();

int tempPwCount = 0;

	while (i >> temp) {

	tempPwCount = 0;

		if (temp.length() == length && getMapVal(Modifiers::Length)) {

			if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
			o << temp << std::endl;

			else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
			o << temp << std::endl;

			else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
			o << temp << std::endl;

		}

		else if (temp.length() <= maxLength && temp.length() >= minLength && !getMapVal(Modifiers::Length)) {
			
			if (!getMapVal(Modifiers::Password)) {

				if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
				o << temp << std::endl;

				else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
				o << temp << std::endl;

				else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
				o << temp << std::endl;

			}

			else {

				if (tempPass.length() == temp.length()) {

					for (int x = 0; x < tempPass.length(); x++) {

						if (tempPass[x] != '*' && tempPass[x] == temp[x])
						tempPwCount++;

					}

					if (tempPwCount == pwCount) {
					
						if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
						o << temp << std::endl;

						else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
						o << temp << std::endl;

						else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
						o << temp << std::endl;

					}

				}

			}

		}

	}

i.close();

o.close();

}
