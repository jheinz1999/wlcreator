// checkArgs.cpp - Checks command line arguments

void PasswordNarrower::checkArgs(int argc, char** argv) {

int argPos = 1;

	if (argc < 5) {

	usage();
	exit(1);

	}

	while (argPos < argc) {

	parsed = 0;

	std::string i = argv[argPos];

		if (i == "-i") {

		input = argv[argPos + 1];
		argPos += 2;
		inputted = 1;

		parsed = 1;

		}

		else if (i == "-o") {

		output = argv[argPos + 1];
		argPos += 2;
		outputted = 1;

		parsed = 1;

		}

		else if (i == "--password") {

		tempPass = argv[argPos + 1];
		argPos += 2;
		updateMap(Modifiers::Password, 1);
		
		parsed = 1;

		}

		else if (i == "--numbers-only") {

		argPos++;

		updateMap(Modifiers::NumsOnly, 1);
		
		parsed = 1;

		}
		
		else if (i == "--chars-only") {

		argPos++;

		updateMap(Modifiers::CharsOnly, 1);
		
		parsed = 1;

		}
		
		else if (i == "--upper-only") {

		argPos++;

		updateMap(Modifiers::UpperOnly, 1);
		
		parsed = 1;

		}
		
		else if (i == "--lower-only") {

		argPos++;

		updateMap(Modifiers::LowerOnly, 1);
		
		parsed = 1;

		}
		
		else if (i == "-n") {

		argPos++;

		updateMap(Modifiers::NoNums, 1);
		
		parsed = 1;

		}
		
		else if (i == "-c") {

		argPos++;

		updateMap(Modifiers::NoChars, 1);
		
		parsed = 1;

		}
		
		else if (i == "-l") {

		argPos++;

		updateMap(Modifiers::NoLow, 1);
		
		parsed = 1;

		}
		
		else if (i == "-u") {

		argPos++;

		updateMap(Modifiers::NoUp, 1);
		
		parsed = 1;

		}
		
		else if (i == "-s") {

		argPos++;

		updateMap(Modifiers::NoSpecial, 1);
		
		parsed = 1;

		}

		else if (i == "--max-length") {

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> maxLength;

		argPos += 2;
		parsed = 1;

		}

		else if (i == "--min-length") {

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> minLength;

		argPos += 2;
		parsed = 1;

		}

		else if (i == "--length") {

		std::stringstream stream;
		stream << argv[argPos + 1];
		stream >> length;

		updateMap(Modifiers::Length, 1);

		argPos += 2;
		parsed = 1;

		}
		
		if (!parsed)
		argPos++;

	}

	if (!inputted || !outputted) {

	usage();
	exit(1);

	}

}
