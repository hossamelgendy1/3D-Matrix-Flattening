#include <iostream>
#include "FlatMatrix.h"
using namespace std;

int main()
{
    Matrix3D mat3d(4,3,2);
    FlatMatrix flat(mat3d);
    cout << flat[flat.convertIndex(1, 2, 1)];
}

