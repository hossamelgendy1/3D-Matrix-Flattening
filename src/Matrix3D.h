class Matrix3D
{
private:
    int _n, _m, _p;
    int*** mat;
public:
    Matrix3D(int n, int m, int p);
    int& getElement(const int i, const int j, const int k);
    int getXMax();
    int getYMax();
    int getZMax();
};

