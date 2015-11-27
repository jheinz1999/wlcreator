// hasChars.cpp - Checks if string contains characters

#include "passwordNarrower.hpp"

#include <string>

bool PasswordNarrower::hasChars(std::string &str) {

return str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;

}
