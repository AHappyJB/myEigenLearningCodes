#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include"lineSeparate.h"
#include"helloEigen.h"
#include"arrayClass.h"
#include"arrayCalculation.h"
#include"blockOperation.h"
#include"normCalculation.h"
#include"broadcast.h"
#include"geometryUsage.h"

using namespace std;
using namespace Eigen;


int main() 
{
	cout << "This is Eigen Library learning code!" << endl;
	//lineSeparate(4);
	cout << "Get start from mainFunction.cpp here!" << endl;
	//lineSeparate(4);
	helloEigen();
	//lineSeparate(4);
	arrayClass();
	//lineSeparate(4);
	arrayCalculation();
	//lineSeparate(4);
	blockOperation();
	//lineSeparate(4);
	normCalculation();
	//lineSeparate(4);
	broadcast();
	//lineSeparate(4);
	geometryUsage();
	//lineSeparate(4);
	system("pause");
	return 0;
}