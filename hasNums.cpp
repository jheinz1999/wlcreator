// hasNums.cpp - Checks if string contains Numbers

#include "stringops.hpp"
#include <string>

bool hasNums(std::string &str) {

return str.find_first_of("0123456789") != std::string::npos;

}
