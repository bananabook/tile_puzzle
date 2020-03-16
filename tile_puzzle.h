class tile{
	public:
	bool* shape;
	tile(int dimension, int* size, bool* shape);
};

class puzzle{
	public:
	tile* tile_set;
	puzzle(int dimension, int* size);
};
