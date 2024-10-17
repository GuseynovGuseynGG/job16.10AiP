#include <iostream>
#include "matrix.hpp"

void delmtx(int **t,size_t n)
{
  for(size_t i{0}; i<n; ++i)
{
    delete[] t[i];
}
  delete[] t;
};
int **createmtx(size_t m,size_t n)
{
  int **t=new int* [m];
  size_t created{0};
  try
{
    for(; created<m; ++created)
{
      t[created]=new int[n];
}
}
  catch(const std::bad_alloc & e)
{
    delmtx(t,n);
    throw;
};
  return t;
};
void inputmtx(int **t,size_t m, size_t n)
{
  std::cout << "\n";
  for(size_t i{0}; i<m; ++i)
{
    for(size_t j{0}; j<n; ++j)
{
      std::cin >> t[i][j];
}
};
  std::cout << "\n";
};
void outputmtx(const int *const *t,size_t m, size_t n)
{
  for(size_t i{0}; i<m; ++i)
{
    std::cout << t[i][0];
    for(size_t j{1}; j<n; ++j)
{
      std::cout << " " << t[i][j];
}
    std::cout << "\n";
}

};
