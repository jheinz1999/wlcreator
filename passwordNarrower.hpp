// passwordNarrower.hpp - Class that narrows password lists

class PasswordNarrower {

	public:
	
	PasswordNarrower();

	void checkArgs(int argc, char** argv); // Checks command-line arguments

	void parseFile(); // Parses file and saves output

	std::string input, output, tempPass; // Strings for input file, output file, and known password
	
	private:

	void updateMap(Modifiers mod, bool val); // Updates map
	bool getMapVal(Modifiers mod); // Retrieves value from map
	void passwordInit(); // Initializes password narrowing

	std::map<Modifiers, bool> modifiers; // Map containing command line arguments

	bool inputted, outputted, parsed, helped; // Boolean values for argument checking

	bool hasChars(std::string &str); // Returns true if string has characters
	bool hasNums(std::string &str); // Returns true if string has numbers
	
	int maxLength; // Max password length
	int minLength; // Min password length
	int length; // Known password length

	int pwCount; // Number of known characters in password
	
};

PasswordNarrower::PasswordNarrower() {

// Initializes argument checking variables:

inputted = 0;
outputted = 0;
parsed = 0;
helped = 0;

// Initializes length variables:

minLength = 1;
maxLength = 20;
length = 0;

// Adds key/value pairs to map:

modifiers.insert(std::make_pair(Modifiers::Password, 0));
modifiers.insert(std::make_pair(Modifiers::NumsOnly, 0));
modifiers.insert(std::make_pair(Modifiers::CharsOnly, 0));
modifiers.insert(std::make_pair(Modifiers::UpperOnly, 0));
modifiers.insert(std::make_pair(Modifiers::LowerOnly, 0));
modifiers.insert(std::make_pair(Modifiers::NoNums, 0));
modifiers.insert(std::make_pair(Modifiers::NoChars, 0));
modifiers.insert(std::make_pair(Modifiers::NoLow, 0));
modifiers.insert(std::make_pair(Modifiers::NoUp, 0));
modifiers.insert(std::make_pair(Modifiers::NoSpecial, 0));
modifiers.insert(std::make_pair(Modifiers::Length, 0));

}

#include "checkArgs.cpp"
#include "updateMap.cpp"
#include "getMapVal.cpp"
#include "parseFile.cpp"
#include "hasChars.cpp"
#include "hasNums.cpp"
#include "passwordInit.cpp"

