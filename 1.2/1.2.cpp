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
  
    int rowCount;
    int colCount;
    cout << "rows = "; cin >> rowCount;
    cout << "cols = "; cin >> colCount;
    int Low = -10;
    int High = 10;
   
    float** a = new float* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new float[colCount];

    Matrix l;
    l.Read();
    l.Display();
    cout << endl;
    l.Create(a, rowCount, colCount, Low, High);
    l.Print(a);
    cout << endl;

   cout << "max = " <<  l.Max(a, rowCount, colCount) << endl;
   cout << "min = " <<  l.Min(a, rowCount, colCount) << endl;
   cout << "summa = " << l.Summa(a, rowCount, colCount) << endl;;
}