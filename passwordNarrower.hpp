// passwordNarrower.hpp - Class that narrows password lists

class PasswordNarrower {

	public:
	
	PasswordNarrower();

	void checkArgs(int argc, char** argv);

	void parseFile();

	std::string input, output, tempPass;	
	
	private:

	void updateMap(Modifiers mod, bool val);
	bool getMapVal(Modifiers mod);

	std::map<Modifiers, bool> modifiers;

	bool inputted, outputted, parsed, helped;

	bool hasChars(std::string str);
	bool hasNums(std::string str);
	
	int maxLength;
	int minLength;
	int length;
	
};

PasswordNarrower::PasswordNarrower() {

inputted = 0;
outputted = 0;
parsed = 0;
helped = 0;

minLength = 1;
maxLength = 20;
length = 0;

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

