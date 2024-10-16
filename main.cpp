#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t M=0,N=0;
  std::cin >> M >> N;
  std::cout << M << " " << N <<"\n";
  if(!std::cin)
{
  return 1;
}
  int **arr=createmtx(M,N);
  inputmtx(arr,M,N);
  outputmtx(arr,M,N);
  delmtx(arr,N);
}

