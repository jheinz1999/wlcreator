/*

WLCREATOR

by Jonathan Heinz

Last Modified: 11/21/15

Description: wlcreator is a command-line tool that was designed to be used with bruteforce programs. It
is used to narrow large wordlists based on certain criteria.

USAGE:

wlcreator -i [inputfile] -o [outputfile] [args]

ARGUMENTS:

--help: Shows help
--password <password>: Narrows based on password
--length: Narrows by length
--max-length: Sets max password length
--min-length: Sets min password length
--numbers-only: Numbers only
--chars-only: Characters only
--upper-only: Uppercase only
--lower-only: Lowercase only

-n: No numbers
-c: No characters
-l: No lowercase
-u: No uppercase
-s: No special characters

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>
#include <iomanip>
#include <thread>
#include <chrono>
#include <sstream>

void usage();

enum Modifiers {
Password,  NumsOnly,  CharsOnly, 
UpperOnly, LowerOnly, NoNums, 
NoChars,   NoLow,     NoUp, 
NoSpecial, Length};

#include "passwordNarrower.hpp"

int main(int argc, char** argv) {

PasswordNarrower device;

device.checkArgs(argc, argv);

device.parseFile();

return 0;

}

void usage() {

std::cout << "Usage: wlcreator -i [inputfile] -o [outputfile] [options]\nType \"wlcreator --help\" for a list\
 of options\n";

}
