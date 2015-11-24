all: main.cpp
	g++ main.cpp -o wlcreator -std=c++11

install: 
	cp wlcreator /usr/bin/

clean:
	rm /usr/bin/wlcreator
