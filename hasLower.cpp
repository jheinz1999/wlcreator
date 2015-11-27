// hasLower.cpp - Determines if string has lowercase letters

#include "stringops.hpp"
#include <string>

bool hasLower(std::string &str) {

return str.find_first_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos;

}
