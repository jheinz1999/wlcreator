// hasChars.cpp - Checks if string contains characters

bool PasswordNarrower::hasChars(std::string &str) {

return str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos;

}
