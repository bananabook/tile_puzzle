#ifndef TILE_PUZZLE_H
#define TILE_PUZZLE_H
#include <list>
class block{
	public:
	int* coordinates;
	int dimension;
	block(int dimension, int* coordinates);
};
class tile{
	public:
	std::list<block> block_list;
	int* size;
	int dimension;
	tile(int dimension);
	void update_size();
	void add_block(block block_to_add);
	void add_block(int* block_to_add);
	void add_blocks(int** block_to_add, int number_of_blocks);
	void print2D();
};
class tile_puzzle{
	public:
	int dimension;
	int* size;
	bool*** shape;
	std::list<tile> tile_set;

	tile_puzzle(int dimension, int* size);
	void add_tile(tile newtile);
	bool check_feasiblity();
};
#endif
