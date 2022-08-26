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

	printf("����matrixes��vectors����Matrixģ����Ķ���\n");
	printf("vectorsֻ��matrixes��һ���������������1�л�1�С�\n");
	printf("�þ�������Ҫ����ģ���������һ��ֻ���˽�ǰ�����������ɡ�\n");
	printf("Matrix����������ģ������ǣ�\n");
	printf("\tMatrix < typename Scalar, int RowsAtCompileTime, int ColsAtCompileTime>\n");
	lineSeparate(1);

	printf("��Eigen�У�vectorsֻ��Matrix��һ���������������1�л�1�С�\n");
	printf("����ֻ��1�е������Ϊ������������������Ϊ��������ͨ����дΪ����(Vector)��\n");
	printf("����һ����1�е�����£����ǳ�Ϊ������(RowVector)��\n");
	lineSeparate(1);

	printf("Array����ܣ�");
	printf("��������������һ�������ÿ��Ԫ�ض�����ͬһ��������ô�����������Ҫ�����Լ�ȥʵ�֣�����Ȼ�������㡣\nArray �ṩ��һ��Array�࣬Ϊ�����ṩ�˴����ľ���δ����Ĳ�������Array��Matrix֮��������໥ת�� �������൱�ڸ������ṩ����ķ�����\nҲΪʹ���ߵĲ�ͬ�����ṩ�˸����ѡ��\n");
	printf("Array���Matrix����ͬ�Ĳ�����\n\tArray < typename Scalar, int RowsAtCompileTime, int ColsAtCompileTime >\n");

	printf("Array�������㣺����Ԫ�ض�Ӧ����\n");
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

	printf("Array��Matrix���Ϳ��Ի���\n������ʽ�ػ���");
	MatrixXd m33 = MatrixXd::Random(3, 3);
	Array33d a33 = Array33d::Random(3, 3);
	Matrix3d r33 = m33 * a33.matrix();
	cout << "The matrix m33 times array a33 is: " << r33 << endl;
	lineSeparate(1);

	cout << "�����ת�õ��÷���" << endl;
	cout << "Here is the matrix a\n" << m33 << endl;
	cout << "Here is the matrix a^T\n" << m33.transpose() << endl;
	cout << "Here is the conjugate of a\n" << m33.conjugate() << endl;
	cout << "Here is the matrix a^*\n" << m33.adjoint() << endl;
}