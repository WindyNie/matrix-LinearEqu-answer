//main文件
//实现函数文件
//为 全选主元高斯消去法解线性方程组的 文件五
//2018-09-13

#include"linearEqu.h"                                 //包含类定义头文件
#include<iostream>
using namespace std;

int main()                                             //主函数
{
	double a[] = {                                     //方程系列矩阵
		0.2368, 0.2471, 0.2568, 1.2671,
		0.1968, 0.2071, 1.2168, 0.2271,
		0.1581, 1.1675, 0.1768, 0.1871,
		1.1161, 0.1254, 0.1397, 0.1490 };

	double b[] = { 1.8471, 1.7471, 1.6471, 1.5471 };   //方程右端项

	LinearEqu equ(4);                                  //定义一个四元方程组对象
	equ.setLinearEqu(a, b);                             //设置方程组
	equ.printLinearEqu();
	if (equ.solve())                                   //调用solve函数求解方程

		equ.printSolution();                           //输出方程解
	else
		cout << "Fail" << endl;
	int names = 0;
	cin >> names;

	return 0;


}
