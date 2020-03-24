prog: print cl compile do

print:
	figlet make

compile:
	g++ -o prog.out main.cpp tile_puzzle.cpp

do:
	./prog.out

cl:
	rm -f prog.out
debug:
	g++ -d main.cpp tile_puzzle.cpp
