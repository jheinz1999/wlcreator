// passwordNarrower.hpp - Class that narrows password lists

#ifndef __PASSWORDNARROWER_HPP__
#define __PASSWORDNARROWER_HPP__

#include <string>
#include <map>

#include "modifiers.hpp"

class PasswordNarrower {

	public:
	
	PasswordNarrower();

	void checkArgs(int argc, char** argv); // Checks command-line arguments

	void parseFile(); // Parses file and saves output

	std::string input, output, tempPass; // Strings for input file, output file, and known password
	
	private:

	void updateArgs(Modifiers mod, bool val); // Updates map
	bool getArgVal(Modifiers mod); // Retrieves value from map
	void passwordInit(); // Initializes password narrowing

	std::map<Modifiers, bool> modifiers; // Map containing command line arguments

	bool inputted, outputted, helped; // Boolean values for argument checking

	bool hasChars(std::string &str); // Returns true if string has characters
	bool hasNums(std::string &str); // Returns true if string has numbers
	
	int maxLength; // Max password length
	int minLength; // Min password length
	int length; // Known password length

	int pwCount; // Number of known characters in password
	
};

#endif

