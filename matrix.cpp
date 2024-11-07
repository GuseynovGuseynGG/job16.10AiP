#include <iostream>
#include "matrix.hpp"

Matrix::Matrix(size_t m, size_t n)
{
  this->m_=m;
  this->n_=n;
  t_ = createmtx();
}

Matrix::Matrix(Matrix &mtx)
{
  this->m_ = mtx.m_;
  this->n_ = mtx.n_;
  this->t_ = createmtx();
  for (size_t i = 0; i < m_; i++)
  {
    for (size_t j = 0; j < n_; j++)
    {
      this->t_[i][j] = mtx.t_[i][j];
    }
  }
}

size_t Matrix::getRows() const
{
  return m_;
}

size_t Matrix::getColumns() const
{
  return n_;
}

void Matrix::inputmtx()
{
  std::cout << "\n";
  for(size_t i = 0; i < m_; ++i)
  {
    for(size_t j = 0; j < n_; ++j)
    {
      std::cin >> t_[i][j];
    }
  }
  std::cout << "\n";
};

Matrix::~Matrix()
{
  delmtx();
}

void Matrix::outputmtx() const
{
  for(size_t i = 0; i < m_; ++i)
  {
    std::cout << t_[i][0];
    for(size_t j = 1; j < n_; ++j)
    {
      std::cout << " " << t_[i][j];
    }
    std::cout << "\n";
  }
}

int** Matrix::reSize(size_t m, size_t n)
{
  m_ = m;
  n_ = n;
  int** res = createmtx();
  for (size_t i = 0; i < m; i++)
  {
      for (size_t j = 0; j < n; j++)
      {
          if (t_[i][j] && nullptr)
          {
              res[i][j] = 0;
          }
          else
          {
              res[i][j] = t_[i][j];
          }
      }
  }
  t_ = res;
};

void Matrix::delmtx()
{
  for(size_t i = 0; i < m_; ++i)
  {
    delete[] t_[i];
  }
  delete[] t_;
};

int** Matrix::createmtx()
{
  int **t=new int* [m_];
  size_t created = 0;
  try
  {
    for(; created<m_; ++created)
    {
      t[created]=new int[n_];
    }
  }
  catch(const std::bad_alloc & e)
  {
    delmtx();
    throw;
  }
  return t;
};
