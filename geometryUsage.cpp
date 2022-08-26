#define PI 3.14
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<string>
#include<Eigen/Dense>
#include<Eigen/Core>
#include<Eigen/Geometry> 
#include"lineSeparate.h"



using namespace std;
using namespace Eigen;


void geometryUsage() 
{
	cout << "This is the 7th file! " << endl;
	cout << ">>> 旋转矩阵(直接 Matrix3d 即可)：" << endl;
	Matrix3d rotationMatrix = Matrix3d::Identity(3, 3);
	cout << rotationMatrix << endl;
	lineSeparate(1);

	cout << ">>> 旋转向量由旋转轴和旋转角度组成。" << endl;
	AngleAxisd rotationVector(PI / 4,Vector3d(0,0,1));
	cout.precision(3);
	cout << "rotation vector:\n Angle is: " << rotationVector.angle() << endl 
		<< "  Axis is: " << rotationVector.axis().transpose() << endl;
	cout << "rotation matrix =\n" << rotationVector.matrix() << endl;
	Matrix3d rotationMatrixFromVector = rotationVector.toRotationMatrix();
	cout << "MatrixXd rotationMatrixFromVector = \n" << rotationMatrixFromVector << endl;
	lineSeparate(1);

	cout << ">>> 用 旋转向量 和 旋转矩阵 对一个 向量 进行 旋转变换。" << endl;
	Vector3d vectorBeforeRotating(1, 0, 0);
	cout << "Before rotating, the vector is: \n" << vectorBeforeRotating.transpose() << endl;
	Vector3d vectorAfterRotating = rotationVector * vectorBeforeRotating;
	cout << "After rotating, the vector is: \n" << vectorAfterRotating.transpose() << endl;
	vectorAfterRotating = rotationMatrixFromVector * vectorBeforeRotating;
	cout << "After rotating, the vector is: \n" << vectorAfterRotating.transpose() << endl;
	lineSeparate(1);

	cout << ">>> 按ZYX的顺序 由 旋转矩阵 直接转换成 欧拉角。" << endl;
	Vector3d eulerAngle = rotationMatrixFromVector.eulerAngles(2, 1, 0);
	cout << "yaw pitch roll = " << eulerAngle.transpose() * (180 / M_PI) << endl;
	lineSeparate(1);

	cout << ">>> 变换矩阵（4 x 4）" << endl;
	Isometry3d T = Isometry3d::Identity();
	T.rotate(rotationVector);
	T.pretranslate(Vector3d(0, 0, 1));
	cout << "Transform matrix = \n" << T.matrix() << endl;
	lineSeparate(1);

	cout << ">>> 用变换矩阵进行向量变换：" << endl;
	Vector3d v3d(0, 1, 0);
	cout << "Before rotating, the vector is: \n" << v3d.transpose() << endl;
	v3d = T * v3d;
	cout << "After rotating, the vector is: \n" << v3d.transpose() << endl;
	lineSeparate(1);

	cout << ">>> 由旋转向量构造四元数：" << endl;
	Quaterniond q = Quaterniond(rotationVector);
	cout << "quaternion = \n" << q.coeffs().transpose() << endl;
	Quaterniond qq = Quaterniond(rotationMatrix);
	cout << "quaternion = \n" << qq.coeffs().transpose() << endl;

	Vector3d v_rotated = q * vectorBeforeRotating;
	cout << "After rotation = " << v_rotated.transpose() << endl;
}