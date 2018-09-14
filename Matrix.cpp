//Matrix.cpp
//Matrix类中函数的实现
//为 全选主元高斯消去法解线性方程组的 文件三
//2018-09-13

#include"matrix.h"   //包含类的定义头文件
#include<iostream>
using namespace std;

void Matrix::setMatrix(const double* values){     //设置矩阵
	for (int i = 0; i < size*size; i++)
		elements[i] = values[i];                  //矩阵成员赋初值
}

Matrix::Matrix(int size/* =2*/) :size(size){      //矩阵Matrix的构造函数
	elements = new double[size*size];             //动态分配内存
}

Matrix::~Matrix(){
	delete[] elements;
}

void Matrix::printMatrix() const{               //打印矩阵的元素

	cout << "The Matrix is : " << endl;          //输出提示信息
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)          //按行输出
		cout << element(i, j) << "	";          //调用matrix类的成员函数element
		
		cout << endl;                           //每行输出结束换行
	}	
}
