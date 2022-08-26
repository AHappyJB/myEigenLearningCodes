#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;


void helloEigen() 
{
	cout << "This is the first file about the learning." << endl;
	lineSeparate(1);

	MatrixXd matrix_4d(4, 4);
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			matrix_4d(i, j) = 0.5 * i + 0.5 * j;
		}
	}
	cout << "We got a 4D matrix named matrix_4d and it is: \n" << matrix_4d << endl;
	lineSeparate(1);

	cout << "MatrixXd 表示的是动态数组，初始化的时候指定数组的【行数】和【列数】" << endl;
	cout << "m(i,j) 表示第i行第j列的值，m(i,j)=x 对数组某个元素进行初始化" << endl;
	cout << "eigen重载了 << 运算符，可以直接输出 eigen矩阵 的值" << endl;
	lineSeparate(1);

	MatrixXd matrix_3d = MatrixXd::Random(3,3);
	matrix_3d = matrix_3d + MatrixXd::Constant(3, 3, 1.5) * 12;
	cout << "We got a 3D matrix named matrix_3d and it is: \n" << matrix_3d << endl;
	lineSeparate(1);

	cout << "初始化动态矩阵m,使用Random函数,初始化的值在[-1,1]区间内,矩阵大小3X3" << endl;
	cout << "MatrixXd::Constant(3, 3, 1.2) 初始化3X3矩阵,矩阵里面的数值为常量,全部为1.2" << endl;
	cout << "Eigen重载了+ 运算符，两个矩阵有相同的行数和列数即可相加,对应位置上的值相加" << endl;
	lineSeparate(1);

	VectorXd vector_3d(3);
	vector_3d << 1.5, 1.6, 1.7;
	cout << "We got a 3D vector named vector_3d and it is: \n" << vector_3d << endl;
	lineSeparate(1);

	cout << "逗号初始化，英文：comma-initializer,Eigen未提供c++11 的{}初始化方式" << endl;
	cout << "Eigen提供了一种逗号初始化器语法，该语法使用户可以轻松设置矩阵，向量或数组的所有系数。" << endl;
	cout << "只需列出系数，从左上角开始，从左到右，从上到下移动。" << endl;
	cout << "需要预先指定对象的大小。如果列出的系数太少或太多，编译器就会报错。"<< endl;
	lineSeparate(1); 

	VectorXd vectorResult_3d = matrix_3d * vector_3d;
	cout << "The result of matrix_3d * vector_3d is: \n" << vectorResult_3d << endl;
	lineSeparate(1);

	RowVectorXd newVector_3d_1(3);
	newVector_3d_1 << 5, 6, 7;
	RowVectorXd newVector_4d_1(4);
	newVector_4d_1 << 8, 9, 10, 11;
	RowVectorXd newVector_7d_result(3+4);
	newVector_7d_result << newVector_3d_1, newVector_4d_1;
	cout << "We got a 7D matrix named newVector_7d_result and it is: \n" << newVector_7d_result << endl;
	lineSeparate(1);

	cout << "初始化列表的元素本身可以是向量或矩阵。通常的用途是将向量或矩阵连接在一起。" << endl;
	cout << "请记住，必须先设置大小，然后才能使用逗号初始化程序。" << endl;
	lineSeparate(1);

	MatrixXd m1 = MatrixXd::Random(3, 3);
	MatrixXd m2 = MatrixXd::Constant(3, 3, 1.8);
	Matrix4d m3 = Matrix4d::Zero();
	Matrix4d m4 = Matrix4d::Ones();
	Matrix4d m5 = Matrix4d::Identity();
	Matrix3d m6;
	m6 << 1, 2, 3, 4, 5, 6, 7, 8, 9;
	cout << "随机初始化初始化的值在[-1,1]区间内,矩阵大小3X3\n" << "m1 =" << endl << m1 << endl;
	cout << "常量值初始化,矩阵里面的值全部为2.4 ,三个参数分别代表：行数，列数，常量值\n" << "m2 =" << endl << m2 << endl;
	cout << "零初始化.矩阵里面的值全部为0\n" << "m3 =" << endl << m3 << endl;
	cout << "矩阵里面的值全部初始化为1\n" << "m4 =" << endl << m4 << endl;
	cout << "初始化为单位矩阵\n" << "m5 =" << endl << m5 << endl;
	cout << "用户定义矩阵\n" << "m6=\n" << m6 << endl;
	lineSeparate(1);

	MatrixXf matrix_23 = MatrixXf::Ones(2, 3);
	cout << "We got a 2row-3column matrix named matrix_23 and it is: \n" << matrix_23 << endl;
	matrix_23 = (MatrixXf(3, 2) << 1, 2, 3, 4,5,6).finished() * matrix_23;
	cout << "After times, it is: \n" << matrix_23 << endl;
	lineSeparate(1);

	printf("Original: %d * %d.\n", matrix_23.rows(), matrix_23.cols());
	matrix_23.resize(1, 9);
	printf("Now: %d * %d.\n", matrix_23.rows(), matrix_23.cols());
	lineSeparate(1);

	printf("调整动态大小矩阵的大小是通过resize（）方法完成的。\n");
	printf("动态矩阵可以随意调整矩阵大小，固定尺寸的矩阵无法调整大小。\n");
	lineSeparate(1);
}




