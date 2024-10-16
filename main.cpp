#include<iostream>
#include "matrix.hpp"

int main()
{
	size_t M=0,N=0;
	std::cin >> M >> N;
	std::cout << M << " " << N <<"\n";
	int **arr=createmtx(M,N);
	delmtx(arr,M,N);
}

