// passwordInit.cpp - initializes password-based narrowing

#include "passwordNarrower.hpp"
#include "modifiers.hpp"

void PasswordNarrower::passwordInit() {

pwCount = 0; // This variable stores the number of known characters

	for (int x = 0; x < tempPass.length(); x++) {

		if (tempPass[x] != '*') // if character isn't *, increment the number of known characters.
		pwCount++;

	}

}
