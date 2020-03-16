#include <list>
class tile{
	public:
	bool* shape;
	tile(int dimension, int* size, bool* shape){};
};

class tile_puzzle{
	public:
	int dimension;
	int* size;
	bool* shape;
	std::list<tile> tile_set;

	tile_puzzle(int dimension, int* size);
	void add_tile(tile newtile);
};
