#include <iostream>
#include "puzzle.h"
int main(){
	int dimension=2;
	int* size=new int[dimension];
	size[0]=1;
	size[1]=4;
	puzzle obj(dimension, size);
	delete size;
	return 0;
}
