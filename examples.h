#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>
#include "tile_puzzle.h"
#include <typeinfo>

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
			int** coord=new int*[5];
			for (int i=0;i<5;i++){
				coord[i]=new int[2];
			}
			coord[0][0]=0;
			coord[0][1]=0;

			coord[1][0]=1;
			coord[1][1]=1;

			coord[2][0]=0;
			coord[2][1]=1;

			coord[3][0]=0;
			coord[3][1]=2;

			coord[4][0]=0;
			coord[4][1]=3;

			tile* my_tile;
			//*my_tile=tile(2);
			/*
			tile_a.add_blocks(coord, 5);
			tile_a.print2D();
			*/
			break;
		}
	};
}
#endif
