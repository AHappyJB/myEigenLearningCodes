#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;


void arrayClass() 
{
	cout << "This is the second file about the learning." << endl;
	lineSeparate(1);

	printf("所有matrixes和vectors都是Matrix模板类的对象。\n");
	printf("vectors只是matrixes的一种特殊情况，具有1行或1列。\n");
	printf("该矩阵类需要六个模板参数，但一般只需了解前三个参数即可。\n");
	printf("Matrix的三个必需模板参数是：\n");
	printf("\tMatrix < typename Scalar, int RowsAtCompileTime, int ColsAtCompileTime>\n");
	lineSeparate(1);

	printf("在Eigen中，vectors只是Matrix的一种特殊情况，具有1行或1列。\n");
	printf("他们只有1列的情况最为常见；这样的向量称为列向量，通常缩写为向量(Vector)。\n");
	printf("在另一行有1行的情况下，它们称为行向量(RowVector)。\n");
	lineSeparate(1);

	printf("Array类介绍：");
	printf("但是如果我们想给一个矩阵的每个元素都加上同一个数，那么这个操作就需要我们自己去实现，这显然并不方便。\nArray 提供了一个Array类，为我们提供了大量的矩阵未定义的操作，且Array和Matrix之间很容易相互转换 ，所以相当于给矩阵提供更多的方法。\n也为使用者的不同需求提供了更多的选择。\n");
	printf("Array类和Matrix有相同的参数。\n\tArray < typename Scalar, int RowsAtCompileTime, int ColsAtCompileTime >\n");

	printf("Array基本运算：各个元素对应运算\n");
	ArrayXXd a(4, 4);
	a << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,15,16;
	ArrayXXd b(4, 4);
	b << 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4;
	cout << "a + b = " << endl << a + b << endl;
	cout << "a - 2 = " << endl << a - 2 << endl;
	cout << "a * b = " << endl << a * b << endl;
	cout << "a / b = " << endl << a / b << endl;
	a *= 2;
	cout << "a *= 2,a =  " << endl << a << endl;
	a -= 10;
	cout << "a - 10 = " << endl << a << endl;
	cout << "a.abs() =  " << endl << a.abs() << endl;
	cout << "a.abs().sqrt() =  " << endl << a.abs().sqrt() << endl;
	cout << "a.min() =  " << endl << a.min(a.abs().sqrt()) << endl;
	lineSeparate(1);

	printf("Array和Matrix类型可以互换\n必须显式地互换");
	MatrixXd m33 = MatrixXd::Random(3, 3);
	Array33d a33 = Array33d::Random(3, 3);
	Matrix3d r33 = m33 * a33.matrix();
	cout << "The matrix m33 times array a33 is: " << r33 << endl;
	lineSeparate(1);

	cout << "共轭和转置的用法：" << endl;
	cout << "Here is the matrix a\n" << m33 << endl;
	cout << "Here is the matrix a^T\n" << m33.transpose() << endl;
	cout << "Here is the conjugate of a\n" << m33.conjugate() << endl;
	cout << "Here is the matrix a^*\n" << m33.adjoint() << endl;
}