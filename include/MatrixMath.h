#pragma once
#ifndef MATRIXMATH_H
#define MATRIXMATH_H

#include <iostream>
#include <cstdlib>
#include <vector>

class Matrix
{
public:
	Matrix();
	~Matrix();
	Matrix(int row_dim, int col_dim);
	Matrix(int row_dim, int col_dim, float* elements);
	Matrix operator*(const Matrix& m);
	Matrix operator*(const float& f);
	Matrix operator+(const Matrix& m);
	Matrix Transpose();
	void CoutMatrix();
	int Dimensions[2];
	std::vector<float> Elements;
};

#endif
