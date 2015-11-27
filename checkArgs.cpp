// checkArgs.cpp - Checks command line arguments

#include "passwordNarrower.hpp"
#include "modifiers.hpp"

#include <string>
#include <sstream>

void help();
void usage();

void PasswordNarrower::checkArgs(int argc, char** argv) {

int argPos = 1; // Index value of current argument that is being parsed

	while (argPos < argc) { // Repeats until all arguments have been parsed

	std::string i = argv[argPos]; // argv must be converted to string for comparison

		if (i == "-i") { // specifies input file

		input = argv[argPos + 1]; // sets input to next argument
		argPos += 2; // changes the argument position to one after the input
		inputted = 1; // Sets flag so program knows there is an input file

		}

		else if (i == "-o") { // specifies output file

		output = argv[argPos + 1];
		argPos += 2;
		outputted = 1;

		}

		else if (i == "--password") { // specifies password, if you know part of it

		tempPass = argv[argPos + 1];
		argPos += 2;
		updateArgs(Modifiers::Password, 1);

		}

		else if (i == "--nums-only") { // only adds number passwords to the new file

		argPos++;

		updateArgs(Modifiers::NumsOnly, 1);

		}
		
		else if (i == "--chars-only") { // Only adds character passwords to the new file

		argPos++;

		updateArgs(Modifiers::CharsOnly, 1);

		}
		
		else if (i == "--upper-only") { // only adds uppercase passwords to the new file

		argPos++;

		updateArgs(Modifiers::UpperOnly, 1);

		}
		
		else if (i == "--lower-only") { // only adds lowercase passwords to the new file

		argPos++;

		updateArgs(Modifiers::LowerOnly, 1);

		}
		
		else if (i == "-n") { // skips over passwords with numbers

		argPos++;

		updateArgs(Modifiers::NoNums, 1);

		}
		 
		else if (i == "-c") { // skips over passwords with characters

		argPos++;

		updateArgs(Modifiers::NoChars, 1);

		}
		
		else if (i == "-l") { // skips over passwords with lowercase characters

		argPos++;

		updateArgs(Modifiers::NoLow, 1);

		}
		
		else if (i == "-u") { // skips over passwords with uppercase characters

		argPos++;

		updateArgs(Modifiers::NoUp, 1);

		}
		
		else if (i == "-s") { // skips over passwords with special characters

		argPos++;

		updateArgs(Modifiers::NoSpecial, 1);

		}

		else if (i == "--max-length") { // sets maximum password length

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> maxLength;

		argPos += 2;

		}

		else if (i == "--min-length") { // sets minimum password length

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> minLength;

		argPos += 2;

		}

		else if (i == "--length") { // sets definite password length

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> length;

		updateArgs(Modifiers::Length, 1);

		argPos += 2;

		}

		else if (i == "--help") { // shows help dialog

		argPos = argc;
		helped = 1;
		help();

		}
		
		else
		argPos++;

	}

	if (!inputted || !outputted) { // without an input/output, the program can't run. Shows usage dialog.

	usage();
	exit(1);

	}

}
