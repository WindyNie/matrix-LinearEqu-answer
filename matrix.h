//Matrix.h 
//矩阵类定义
//为 全选主元高斯消去法解线性方程组 的文件一
//2018-09-13

#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix{
public:
	Matrix(int size = 2);
	~Matrix();
	void setMatrix(const double *values);
	void printMatrix() const;
	int getSize() const { return size; }
	double &element(int i, int j){ return elements[i*size + j]; }
	double element(int i, int j) const { return elements[i*size + j]; }
private:
	int size;
	double* elements;

};
#endif