// hasNums.cpp - Checks if string contains Numbers

bool PasswordNarrower::hasNums(std::string str) {

	if (str.find('0') != std::string::npos || 
		str.find('1') != std::string::npos || 
		str.find('2') != std::string::npos || 
		str.find('3') != std::string::npos || 
		str.find('4') != std::string::npos || 
		str.find('5') != std::string::npos || 
		str.find('6') != std::string::npos || 
		str.find('7') != std::string::npos || 
		str.find('8') != std::string::npos || 
		str.find('9') != std::string::npos) {

	return 1;

	}

return 0;

}
