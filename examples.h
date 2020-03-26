#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>
#include "tile_puzzle.h"

void example(int what){
	switch(what){
		case 1:
			int dimension=2;
			int* size=new int[dimension];
			size[0]=4;
			size[1]=4;

			tile_puzzle mypuzzle(dimension, size);

			tile tile_a(dimension);
			int* coordinates= new int[dimension];

			coordinates[0]=0;
			coordinates[1]=0;
			tile_a.add_block(coordinates);

			coordinates[0]=2;
			coordinates[1]=10;
			tile_a.add_block(coordinates);

			tile_a.print2D();



			delete coordinates;
			delete size;
		break;
	};
}
#endif
