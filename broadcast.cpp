#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"

using namespace std;
using namespace Eigen;

void broadcast() 
{
	cout << "This is the 6th file!" << endl;

	MatrixXf m10f = MatrixXf::Random(10, 10);
	VectorXf v10f = VectorXf::Random(10);

	cout << "¹ã²¥»úÖÆ£º" << endl;
	m10f.colwise() += v10f;
	cout << "m10f.colwise() += v10f is: \n" << m10f << endl;
}