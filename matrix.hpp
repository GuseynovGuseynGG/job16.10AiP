#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<cstddef>
  class Matrix
  {
    int** t_ = nullptr;
    size_t m_ = 0;
    size_t n_ = 0;

    int **createmtx();
    void delmtx();

  public:
    Matrix(size_t m, size_t n);
    Matrix(Matrix &mtx);
    ~Matrix();

    size_t getRows() const;
    size_t getColumns() const;

    void inputmtx();
    void outputmtx() const;
    int** reSize(size_t m, size_t n);
  };

#endif
