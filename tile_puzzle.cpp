#include <iostream>
#include <list>
#include "tile_puzzle.h"
tile_puzzle::tile_puzzle(int dimension, int* size){
	this->dimension=dimension;
	this->size=size;

}
void tile_puzzle::add_tile(tile newtile){
	this->tile_set.push_back(newtile);
}

tile::tile(int dimension, int* size){
	this->size=size;
	this->dimension=dimension;
}
void tile::print2D(){
	if(this->dimension!=2){
		std::cout<<"Tile has wrong dimension. Not 2D tile cannot be printed with print2D()."<<std::endl;
	};
	int** matrix=new int*[this->size[0]];
	for (int i=0;i<this->size[0]; i++){
		matrix[i]=new int[this->size[1]];
	}

	for (int i=0;i<this->size[0];i++){
		for (int j=0;j<this->size[0];j++){
			matrix[i][j]=0; } };
 
	std::list<block>::iterator it;
	for (it=this->block_list.begin();it!=this->block_list.end(); it++){
		matrix[it->coordinates[0]][it->coordinates[1]]=1;
	};
	for (int i=0; i<this->size[0]; i++){
		for (int j=0; j<this->size[1]; j++){
			std::cout<<matrix[i][j];
		}
		std::cout<<std::endl;
	}


	//delete
	for (int i=0;i<this->size[0]; i++)
		delete matrix[i];
	delete matrix;
}
void tile::add_block(block block_to_add){
	this->block_list.push_back(block_to_add);
}

block::block(int dimension, int* coordinates){
	this->dimension=dimension;
	this->coordinates=new int[dimension];

	for (int i=0; i<this->dimension; i++){
		this->coordinates[i]=coordinates[i];
	}
};
