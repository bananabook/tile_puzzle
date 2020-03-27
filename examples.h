#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>
#include "tile_puzzle.h"

void example(int what){
	switch(what){
		case 1:{

			int dimension=3;
			int* size=new int[dimension];
			size[0]=4;
			size[1]=4;

			tile_puzzle mypuzzle(dimension, size);

			delete size;

			tile tile_a(dimension);
			int* coordinates= new int[dimension];

			coordinates[0]=0;
			coordinates[1]=0;
			tile_a.add_block(coordinates);

			coordinates[0]=0;
			coordinates[1]=1;
			tile_a.add_block(coordinates);

			coordinates[0]=0;
			coordinates[1]=2;
			tile_a.add_block(coordinates);

			coordinates[0]=1;
			coordinates[1]=1;
			tile_a.add_block(coordinates);
			delete coordinates;

			tile_a.print2D();

			mypuzzle.add_tile(tile_a);
			if(mypuzzle.check_feasiblity()){
				std::cout<<"feasible"<<std::endl;
			}
			break;
		}

		case 2:{

			break;
		}
	};
}
#endif
