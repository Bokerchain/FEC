#pragma once

#include "galois8bit.h"

#define MAX 64

struct matrix_t 
{
	int		m_row;
	int		m_col;
	unsigned char m_data[MAX][MAX];
} ;

class matrix
{
public:
	matrix(void);
	~matrix(void);
public:
	galois8bit galois8bit_ptr_;
	matrix_t matrix_t_;
public:
	//计算两个矩阵之和，返回加和后的矩阵;
	matrix_t matrixAdd		(matrix_t *A, matrix_t *B);
	//计算两个矩阵之差，返回相减后的矩阵;
	matrix_t matrixSub		(matrix_t *A, matrix_t *B);
	//计算两个矩阵相乘，返回相乘后的矩阵;
	matrix_t matrixMul		(matrix_t *A, matrix_t *B);
	//计算矩阵倍乘，返回倍乘后的矩阵;
	matrix_t matrixNumMul	(matrix_t *A, unsigned char k);
	//计算矩阵转置，返回转置后的矩阵;
	matrix_t matrixTrans	(matrix_t *A);
	//高斯约旦消去法计算逆矩阵，返回逆矩阵;
	matrix_t matrixGauss	(matrix_t *A);
};
