// passwordInit.cpp - initializes password narrowing

void PasswordNarrower::passwordInit() {

pwCount = 0;

	for (int x = 0; x < tempPass.length(); x++) {

		if (tempPass[x] != '*')
		pwCount++;

	}

}
