// constructor.cpp - Constructor for passwordNarrower

#include "passwordNarrower.hpp"

PasswordNarrower::PasswordNarrower() {

// Initializes argument checking variables:

inputted = 0;
outputted = 0;
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
