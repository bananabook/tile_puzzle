#include <iostream>
#include "tile_puzzle.h"
int main(){
	int dimension=2;
	int* size=new int[dimension];
	size[0]=4;
	size[1]=4;
	
	tile_puzzle mypuzzle(dimension, size);

	bool shape_a[4*4]={
		1, 0, 0, 0,
		1, 0, 0, 0,
		1, 0, 0, 0,
		1, 1, 1, 1
	};
	tile tile_a(dimension, size, shape_a);





	delete size;
	return 0;
}
