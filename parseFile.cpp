// parseFile.cpp - Parses file

void PasswordNarrower::parseFile() {

std::ifstream i; // input file

std::ofstream o; // output file

// opens files

i.open(input.c_str());

o.open(output.c_str());

std::string temp; // variable where string is stored before adding to file

	if (getMapVal(Modifiers::Password)) // initializes password-based narrowing
	passwordInit();

int tempPwCount = 0; // If using password-based narrowing, this variable counts how many characters are
// similar.

	while (i >> temp) { // Repeats until there is no more data in the input file

	tempPwCount = 0;

		if (temp.length() == length && getMapVal(Modifiers::Length)) { // If doing a precise length search

			if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp)) // If searching for number passwords
			o << temp << std::endl;

			else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp)) // if searching for character passwords
			o << temp << std::endl;

			else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
			o << temp << std::endl;

		}

		else if (temp.length() <= maxLength && temp.length() >= minLength && !getMapVal(Modifiers::Length)) {
		
			if (!getMapVal(Modifiers::Password)) { // If not doing a password-based search

				if (getMapVal(Modifiers::NumsOnly) && !hasChars(temp) && hasNums(temp))
				o << temp << std::endl;

				else if (getMapVal(Modifiers::CharsOnly) && !hasNums(temp))
				o << temp << std::endl;

				else if (!getMapVal(Modifiers::CharsOnly) && !getMapVal(Modifiers::NumsOnly))
				o << temp << std::endl;

			}

			else {

				if (tempPass.length() == temp.length()) { // If specified password length and input length are the same

					for (int x = 0; x < tempPass.length(); x++) { // Checks to see how many characters are similar

						if (tempPass[x] != '*' && tempPass[x] == temp[x])
						tempPwCount++;

					}

					if (tempPwCount == pwCount) { // If an equal number of known characters are similar
					
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
