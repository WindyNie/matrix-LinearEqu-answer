//linearEqu.h
//linearEqu类定义
//为 全选主元消去法解线性方程组 的文件二
//2018-09-13

#ifndef _LINEAREQU_H
#define _LINEAREQU_H

#include"matrix.h"

class LinearEqu :public Matrix{
public:
	LinearEqu(int size = 2);
	~LinearEqu();
	void setLinearEqu(const double* a, const double* b);
	bool solve();
	void printLinearEqu() const;
	void printSolution() const;
private:
	double* sums;
	double* solution;
};
#endif