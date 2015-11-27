// hasUpper.cpp - Determines if string has uppercase letters

#include "stringops.hpp"
#include <string>

bool hasUpper(std::string &str) {

return str.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;

}
