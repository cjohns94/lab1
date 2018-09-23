all:
	g++ -std=c++11 -o OUTPUT main.cpp Arena.cpp Fighter.cpp Robot.cpp Archer.cpp Cleric.cpp
	./OUTPUT

clean:
	rm -f OUTPUT out_file1.txt out_file2.txt out_file3.txt out_file4.txt out_file5.txt