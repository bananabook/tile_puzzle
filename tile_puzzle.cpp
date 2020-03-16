#include <iostream>
#include "tile_puzzle.h"
tile_puzzle::tile_puzzle(int dimension, int* size){
	this->dimension=dimension;
	this->size=size;

}
void tile_puzzle::add_tile(tile newtile){
	this->tile_set.push_back(newtile);
}
