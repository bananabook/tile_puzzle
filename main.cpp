#include <iostream>
#include "tile_puzzle.h"
int main(){
	int dimension=2;
	int* size=new int[dimension];
	size[0]=1;
	size[1]=4;
	puzzle mypuzzle(dimension, size);
	delete size;
	return 0;
}
