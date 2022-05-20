#include "FlatMatrix.h"

FlatMatrix::FlatMatrix(Matrix3D mat3d)
{
	q = mat3d.getXMax() * mat3d.getYMax() * mat3d.getZMax();
	xMax = mat3d.getXMax();
	yMax = mat3d.getYMax();
	flatMat = new int[q];

	int index = 0;
	for (int i = 0; i < mat3d.getXMax(); i++)
	{
		for (int j = 0; j < mat3d.getYMax(); j++)
		{
			for (int k = 0; k < mat3d.getZMax(); k++)
			{
				flatMat[index++] = mat3d.getElement(i, j, k);
			}
		}
	}
}

int FlatMatrix::convertIndex(const int i, const int j, const int k)
{
	//conversion is done in O(1)
	return (k * xMax * yMax) + (j * xMax) + i;
}

int& FlatMatrix::operator[](const int y)
{
	return flatMat[y];
}