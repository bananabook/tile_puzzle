prog: cl compile do
	

compile:
	g++ -o prog.out main.cpp puzzle.cpp

do:
	./prog.out

cl:
	rm -f prog.out
