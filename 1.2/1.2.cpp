#include <iostream>
#include <iomanip>
#include "Матриця.h"
using namespace std;
Matrix makeMatrix(int x, int y)
{
    Matrix p;
    if (!p.Init(x, y))
        cout << "wrong argument Init!" << endl;
    return p;
}

int main()
{

    int rowCount = 10;
    int colCount = 10;

    int Low = -9;
    int High = 9;

    float** a = new float* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new float[colCount];

    Matrix l;
    l.Read();
    l.Display();
    cout << endl;
    l.Create(a, Low, High);
    l.Print(a);
    cout << endl;

    cout << "max = " << l.Max(a) << endl;
    cout << "min = " << l.Min(a) << endl;
    cout << "summa = " << l.Summa(a) << endl;;
}