all: main.cpp
	g++ main.cpp checkArgs.cpp getArgVal.cpp hasChars.cpp hasNums.cpp parseFile.cpp passwordInit.cpp  updateArgs.cpp constructor.cpp -o wlcreator -std=c++11

install:
	cp wlcreator /usr/bin/

clean:
	rm /usr/bin/wlcreator rm wlcreator
