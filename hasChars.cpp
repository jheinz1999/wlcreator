// hasChars.cpp - Checks if string contains characters

#include "stringops.hpp"
#include <string>

bool hasChars(std::string &str) {

return str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;

}
