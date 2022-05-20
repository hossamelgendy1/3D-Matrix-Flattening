#include "Matrix3D.h"
class FlatMatrix
{
private:
	int q, //size of the array
		xMax, yMax;//used for converting
	int* flatMat;
public:
	FlatMatrix(Matrix3D mat3d);
	int convertIndex(const int i, const int j, const int k);
	int& operator[](const int y);
};

