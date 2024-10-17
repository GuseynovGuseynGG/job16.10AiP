#include<cstddef>
#ifndef MATRIX_HPP
  #define MATRIX_HPP
  void inputmtx(int **t,size_t m, size_t n);
  int **createmtx(size_t m,size_t n);
  void delmtx(int **t, size_t n);
  void outputmtx(const int *const *t,size_t m, size_t n);
#endif
