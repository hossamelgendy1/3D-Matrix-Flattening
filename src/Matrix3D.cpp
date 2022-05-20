#include "Matrix3D.h"

Matrix3D::Matrix3D(int n, int m, int p): _n(n), _m(m), _p(p)
{
	int defaultVal = 0;

	mat = new int** [n];
	for (int i = 0; i < n; i++)
	{
		mat[i] = new int* [m];
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = new int[p];
			for (int k = 0; k < p; k++)
			{
				mat[i][j][k] = defaultVal++; //set a default value for each element
			}
		}
	}
}

int& Matrix3D::getElement(const int i, const int j, const int k)
{
	return mat[i][j][k];
}

int Matrix3D::getXMax()
{
	return _n;
}

int Matrix3D::getYMax()
{
	return _m;
}

int Matrix3D::getZMax()
{
	return _p;
}
