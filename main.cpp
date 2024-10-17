#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t M=0,N=0;
  std::cin >> M >> N;
  if(!std::cin)
{
    return 1;
};
  int **arr=nullptr;
  try
{
    arr=createmtx(M,N);
}
  catch(const std::bad_alloc & e)
{
    std::cerr << "Out of memory\n";
    return 1;
};
  inputmtx(arr,M,N);
  outputmtx(arr,M,N);
  delmtx(arr,N);
}
