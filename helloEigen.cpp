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

	cout << "MatrixXd ��ʾ���Ƕ�̬���飬��ʼ����ʱ��ָ������ġ��������͡�������" << endl;
	cout << "m(i,j) ��ʾ��i�е�j�е�ֵ��m(i,j)=x ������ĳ��Ԫ�ؽ��г�ʼ��" << endl;
	cout << "eigen������ << �����������ֱ����� eigen���� ��ֵ" << endl;
	lineSeparate(1);

	MatrixXd matrix_3d = MatrixXd::Random(3,3);
	matrix_3d = matrix_3d + MatrixXd::Constant(3, 3, 1.5) * 12;
	cout << "We got a 3D matrix named matrix_3d and it is: \n" << matrix_3d << endl;
	lineSeparate(1);

	cout << "��ʼ����̬����m,ʹ��Random����,��ʼ����ֵ��[-1,1]������,�����С3X3" << endl;
	cout << "MatrixXd::Constant(3, 3, 1.2) ��ʼ��3X3����,�����������ֵΪ����,ȫ��Ϊ1.2" << endl;
	cout << "Eigen������+ �������������������ͬ�������������������,��Ӧλ���ϵ�ֵ���" << endl;
	lineSeparate(1);

	VectorXd vector_3d(3);
	vector_3d << 1.5, 1.6, 1.7;
	cout << "We got a 3D vector named vector_3d and it is: \n" << vector_3d << endl;
	lineSeparate(1);

	cout << "���ų�ʼ����Ӣ�ģ�comma-initializer,Eigenδ�ṩc++11 ��{}��ʼ����ʽ" << endl;
	cout << "Eigen�ṩ��һ�ֶ��ų�ʼ�����﷨�����﷨ʹ�û������������þ������������������ϵ����" << endl;
	cout << "ֻ���г�ϵ���������Ͻǿ�ʼ�������ң����ϵ����ƶ���" << endl;
	cout << "��ҪԤ��ָ������Ĵ�С������г���ϵ��̫�ٻ�̫�࣬�������ͻᱨ��"<< endl;
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

	cout << "��ʼ���б��Ԫ�ر�����������������ͨ������;�ǽ����������������һ��" << endl;
	cout << "���ס�����������ô�С��Ȼ�����ʹ�ö��ų�ʼ������" << endl;
	lineSeparate(1);

	MatrixXd m1 = MatrixXd::Random(3, 3);
	MatrixXd m2 = MatrixXd::Constant(3, 3, 1.8);
	Matrix4d m3 = Matrix4d::Zero();
	Matrix4d m4 = Matrix4d::Ones();
	Matrix4d m5 = Matrix4d::Identity();
	Matrix3d m6;
	m6 << 1, 2, 3, 4, 5, 6, 7, 8, 9;
	cout << "�����ʼ����ʼ����ֵ��[-1,1]������,�����С3X3\n" << "m1 =" << endl << m1 << endl;
	cout << "����ֵ��ʼ��,���������ֵȫ��Ϊ2.4 ,���������ֱ��������������������ֵ\n" << "m2 =" << endl << m2 << endl;
	cout << "���ʼ��.���������ֵȫ��Ϊ0\n" << "m3 =" << endl << m3 << endl;
	cout << "���������ֵȫ����ʼ��Ϊ1\n" << "m4 =" << endl << m4 << endl;
	cout << "��ʼ��Ϊ��λ����\n" << "m5 =" << endl << m5 << endl;
	cout << "�û��������\n" << "m6=\n" << m6 << endl;
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

	printf("������̬��С����Ĵ�С��ͨ��resize����������ɵġ�\n");
	printf("��̬�������������������С���̶��ߴ�ľ����޷�������С��\n");
	lineSeparate(1);
}




