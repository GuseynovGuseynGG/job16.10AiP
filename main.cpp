#include <iostream>
#include "matrix.hpp"

int main()
{
  size_t m = 0,n = 0;
  std::cin >> m >> n;
  if(!std::cin)
  {
    return 1;
  };
  Matrix arr(m, n);
  try
  {
    arr.inputmtx();
  }
  catch(const std::bad_alloc & e)
  {
    std::cerr << "Error with first matrix\n";
    return 1;
  };
  arr.outputmtx();
  std::cin >> m >> n;
  if(!std::cin)
  {
    return 1;
  };
  arr.reSize(m, n);
  arr.outputmtx();
  Matrix arr2(arr);
  arr2.outputmtx();
}
