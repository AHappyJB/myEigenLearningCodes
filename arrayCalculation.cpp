#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;


void arrayCalculation() 
{
	cout << "This is the third file!" << endl;
	lineSeparate(1);

	Vector4d v4d_0,v4d_1;
	v4d_0 << 0.1, 1.2, 2.3, 3.4;
	v4d_1 << 5.6, 6.7, 7.8, 8.9;

	Vector3d v3d_0, v3d_1;
	v3d_0 << 0.1, 1.2, 2.3;
	v3d_1 << 5.6, 6.7, 7.8;

	cout << "Dot product: " << v4d_0.dot(v4d_1) << endl;
	double dp = v4d_0.adjoint() * v4d_1; // automatic conversion of the inner product to a scalar
	cout << "Dot product via a matrix product: " << dp << endl;
	cout << "Cross product:\n" << v3d_0.cross(v3d_1) << endl;
	cout << "��ס����������ڳߴ�Ϊ3��������\n���������������ߴ��������\n��ʹ�ø���ʱ��Eigen�ĵ�������ǵ�һ������Ϊ�������Եģ��ڶ���Ϊ���Եġ�" << endl;
	lineSeparate(1);

	MatrixXd m5d = MatrixXd::Random(5,5);
	cout << "Here is m5d.sum():       " << m5d.sum() << endl;
	cout << "Here is m5d.prod():      " << m5d.prod() << endl;
	cout << "Here is m5d.mean():      " << m5d.mean() << endl;
	cout << "Here is m5d.minCoeff()(��СԪ��ֵ):  " << m5d.minCoeff() << endl;
	cout << "Here is m5d.maxCoeff()(���Ԫ��ֵ):  " << m5d.maxCoeff() << endl;
	cout << "Here is m5d.trace():     " << m5d.trace() << endl;
	lineSeparate(1);
}