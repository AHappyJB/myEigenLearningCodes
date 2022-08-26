#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;

void blockOperation()
{
	cout << "This is the 4th file! " << endl;

	MatrixXf m10f = MatrixXf::Random(10, 10);
	cout << "m10f: " << endl << m10f << endl;
	cout << "m.block<i,j> (a,b) ��ʾ�ӵ�(a+1)��(b+1)�п�ʼ,��ͼi��,j��" << endl;
	cout << "�ȿ��Ե���ֵ���ֿ��Ե���ֵ��" << endl;
	cout << "m10f.block<4,4>(2,2)=" << endl;
	cout << m10f.block<4,4>(2,2) << endl;
	cout << "�ȿ��Ե���ֵ���ֿ��Ե���ֵ��" << endl;
	m10f.block<2, 2>(6, 6) << 11, 22, 33, 44;
	cout << m10f.block<2, 2>(6, 6) << endl;
	lineSeparate(1);

	printf("�����Ŀ���һ�������е�һ�У���ôʹ��col()��������á�\n��������Ľ��ܶ��ǹ�����Щ����ķ����ġ�");
	cout << "The MatrixXf m10f is: \n"<< m10f << endl;
	cout << m10f.col(3) << "\n" << m10f.row(8) << endl;
	lineSeparate(1);

	VectorXf v20f = VectorXf::Random(20);
	cout << ">>> v20f.head(5)\n" << v20f.head(5) << endl;
	cout << ">>> v20f.tail(5)\n" << v20f.tail(5) << endl;
	cout << ">>> v20f.segment(10, 4)\n" << v20f.segment(10, 4) << endl;
	lineSeparate(1);
}