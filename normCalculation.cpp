#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;

void normCalculation() 
{
	cout << "This is the 5th file! " << endl;
	lineSeparate(1);

	VectorXf v30f = VectorXf::Random(30);
	MatrixXf Matrix10f_1 = MatrixXf::Random(10,10);
	MatrixXf Matrix10f_2 = MatrixXf::Random(10,10);

	cout << "v.squaredNorm() = " << v30f.squaredNorm() << endl;
	cout << "v.norm() = " << v30f.norm() << endl;
	cout << "v.lpNorm<1>() = " << v30f.lpNorm<1>() << endl;
	cout << "v.lpNorm<2>() = " << v30f.lpNorm<2>() << endl;
	cout << "v.lpNorm<3>() = " << v30f.lpNorm<3>() << endl;
	cout << "v.lpNorm<4>() = " << v30f.lpNorm<4>() << endl;
	cout << "v.lpNorm<5>() = " << v30f.lpNorm<5>() << endl;
	cout << "v.lpNorm<6>() = " << v30f.lpNorm<6>() << endl;
	cout << "v.lpNorm<7>() = " << v30f.lpNorm<7>() << endl;
	cout << "v.lpNorm<8>() = " << v30f.lpNorm<8>() << endl;
	cout << "v.lpNorm<9>() = " << v30f.lpNorm<9>() << endl;
	cout << "v.lpNorm<10>() = " << v30f.lpNorm<10>() << endl;
	cout << "v.lpNorm<11>() = " << v30f.lpNorm<11>() << endl;
	cout << "v.lpNorm<Infinity>() = " << v30f.lpNorm<Infinity>() << endl;
	lineSeparate(1);

	cout << "(Matrix10f_1>0).all() = " << (Matrix10f_1.array() > 0).all() << endl;
	cout << "(Matrix10f_1>0).any() = " << (Matrix10f_1.array() > 0).any() << endl;
	cout << "(Matrix10f_1>0).count() = " << (Matrix10f_1.array() > 0).count() << endl;
	lineSeparate(1);

	printf("当需要获得元素在矩阵或数组中的位置时使用迭代。");
	MatrixXf::Index maxRow, maxCol;
	float maxValue = Matrix10f_2.maxCoeff(&maxRow, &maxCol);
	cout << "Max: " << maxValue << ", at: " << maxRow << "," << maxCol << endl;
	lineSeparate(1);

	printf("部分规约指的是对矩阵或数组按行或列进行的操作，对每一列或者行进行规约操作时得到的是一个列或者行向量。\n");
	cout <<"Matrix10f_1.colwise().maxCoeff():" << Matrix10f_1.colwise().maxCoeff() << endl;
	cout << "Matrix10f_1.rowwise().minCoeff():" << Matrix10f_1.rowwise().minCoeff() << endl;
	lineSeparate(1);
}