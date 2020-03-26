#include <iostream>
#include <list>
#include "tile_puzzle.h"
#include <algorithm> //std::max()
tile_puzzle::tile_puzzle(int dimension, int* size){
	this->dimension=dimension;

	this->size=new int[dimension];
	for (int i=0;i<dimension;i++){
		this->size[i]=5;
	}
	this->shape=new bool**[size[0]];
	for (int i=0;i<this->size[0];i++){
		this->shape[i]=new bool*[size[1]];
		for (int j=0;j<this->size[1];j++){
			this->shape[i][j]=new bool[size[2]];
			for (int k=0;k<this->size[2];k++){
				this->shape[i][j][k]=true;
			}
		}
	}


}
void tile_puzzle::add_tile(tile newtile){
	this->tile_set.push_back(newtile);
}
bool tile_puzzle::check_feasiblity(){
	std::list<tile>::iterator iter_tile;
	int number_of_all_blocks=0;
	for(iter_tile=this->tile_set.begin(); iter_tile != this->tile_set.end(); iter_tile++){
		for (int i=0;i<this->dimension;i++){
			if(this->size[i]<iter_tile->size[i]){
				std::cout<<"dimension "<<i<<" wrong."<<std::endl;
				return false;
			}
		}
		number_of_all_blocks+=iter_tile->block_list.size();
	}

	int number_of_spaces=0;
	for (int i=0;i<this->size[0];i++){
		for (int j=0;j<this->size[1];j++){
			for (int k=0;k<this->size[2];k++){
				if(this->shape[i][j][k]){
					number_of_spaces++;
				}
			}
		}
	}
	if(number_of_all_blocks > number_of_spaces){
		return false;
	}

	return true;
}

tile::tile(int dimension){
	this->size=new int[dimension];
	for (int i=0;i<dimension;i++){
		this->size[i]=0;
	}
	this->dimension=dimension;
}
void tile::update_size(){
	int* max=new int[this->dimension];
	std::list<block>::iterator it;
	for (it=this->block_list.begin(); it!=this->block_list.end(); it++){
		for (int j=0; j<it->dimension; j++){
			max[j] = std::max(max[j], it->coordinates[j]);
		}
	}

	for (int i=0; i<this->dimension; i++){
		this->size[i]=max[i]+1;
	}
	delete max;

}
void tile::print2D(){
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
	this->update_size();
}
void tile::add_block(int* block_to_add){
	block newblock(this->dimension, block_to_add);
	this->add_block(newblock);
}

block::block(int dimension, int* coordinates){
	this->dimension=dimension;
	this->coordinates=new int[dimension];

	for (int i=0; i<this->dimension; i++){
		this->coordinates[i]=coordinates[i];
	}
};
