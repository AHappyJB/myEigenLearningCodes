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
	cout << "m.block<i,j> (a,b) 表示从第(a+1)行(b+1)列开始,截图i行,j列" << endl;
	cout << "既可以当左值，又可以当右值。" << endl;
	cout << "m10f.block<4,4>(2,2)=" << endl;
	cout << m10f.block<4,4>(2,2) << endl;
	cout << "既可以当左值，又可以当右值。" << endl;
	m10f.block<2, 2>(6, 6) << 11, 22, 33, 44;
	cout << m10f.block<2, 2>(6, 6) << endl;
	lineSeparate(1);

	printf("如果你的块是一个矩阵中的一列，那么使用col()方法会更好。\n本节其余的介绍都是关于这些特殊的方法的。");
	cout << "The MatrixXf m10f is: \n"<< m10f << endl;
	cout << m10f.col(3) << "\n" << m10f.row(8) << endl;
	lineSeparate(1);

	VectorXf v20f = VectorXf::Random(20);
	cout << ">>> v20f.head(5)\n" << v20f.head(5) << endl;
	cout << ">>> v20f.tail(5)\n" << v20f.tail(5) << endl;
	cout << ">>> v20f.segment(10, 4)\n" << v20f.segment(10, 4) << endl;
	lineSeparate(1);
}