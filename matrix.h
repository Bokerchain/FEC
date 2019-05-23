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
	//������������֮�ͣ����ؼӺͺ�ľ���;
	matrix_t matrixAdd		(matrix_t *A, matrix_t *B);
	//������������֮����������ľ���;
	matrix_t matrixSub		(matrix_t *A, matrix_t *B);
	//��������������ˣ�������˺�ľ���;
	matrix_t matrixMul		(matrix_t *A, matrix_t *B);
	//������󱶳ˣ����ر��˺�ľ���;
	matrix_t matrixNumMul	(matrix_t *A, unsigned char k);
	//�������ת�ã�����ת�ú�ľ���;
	matrix_t matrixTrans	(matrix_t *A);
	//��˹Լ����ȥ����������󣬷��������;
	matrix_t matrixGauss	(matrix_t *A);
};
