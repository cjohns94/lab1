all:
	g++ -std=c++11 -o OUTPUT main.cpp Arena.cpp Fighter.cpp Robot.cpp Archer.cpp Cleric.cpp

clean:
	rm -f OUTPUT