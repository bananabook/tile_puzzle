#include <iostream>
#include "tile_puzzle.h"
int main(){
	int dimension=2;
	int* size=new int[dimension];
	size[0]=4;
	size[1]=4;
	
	tile_puzzle mypuzzle(dimension, size);

	tile tile_a(dimension, size);
	int* coordinates= new int[dimension];

	coordinates[0]=0;
	coordinates[1]=0;
	block block_1(dimension, coordinates);
	tile_a.add_block(block_1);

	coordinates[0]=0;
	coordinates[1]=1;
	block block_2(dimension, coordinates);
	tile_a.add_block(block_2);

	tile_a.print2D();



	delete coordinates;
	delete size;
	return 0;
}
