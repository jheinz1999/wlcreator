// hasNums.cpp - Checks if string contains Numbers

#include "passwordNarrower.hpp"

#include <string>

bool PasswordNarrower::hasNums(std::string &str) {

return str.find_first_of("0123456789") != std::string::npos;

}
