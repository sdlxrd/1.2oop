#include <iostream>
#include <iomanip>
#include "Матриця.h"

using namespace std;
 
void Matrix::setRows(int number)
{
    rowCount = number;
}
void Matrix::setCols(int number)
{
    colCount = number;
}
void Matrix::setB(float** name)
{
	a = name;
}
bool Matrix::Init(int x, int y)
{
    if (x >= 0 && y >= 0)
    {
        rowCount = x;
        colCount = y;
        return 1;
    }
    else {
        return 0;
    }
}
void Matrix::Display() const
{
    cout << "Rows  = " << rowCount << "     cols = " << colCount << endl;
        
}
void Matrix::Read()
{
    int x, y;
    cout << "rows = ";
    cin >> x;
    do
    {
        cout << "cols = ";
        cin >> y;
    } while (!Init(x, y));
}
void Matrix::Create(float** a, int rowCount, int colCount, const int Low, const int High)
{
    
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < colCount; j++)
           a[i][j] = Low + rand() % (High - Low + 1);
}
void Matrix::Print(float**a)
{
    
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }
    
}
int Matrix::Max(float** a, int rowCount, int colCount)
{
        float max = a[0][0];
        for (int i = 0; i < rowCount; i++)
        {
            for (int j = 0; j < colCount; j++)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
        }
        return max;
}
int Matrix::Min(float** a, int rowCount, int colCount)
{
    float min = a[0][0];
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];           
        }
    }
    return min;
}
int Matrix::Summa(float** a, int rowCount, int colCount)
{
    int sum = 0;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)       
            sum += a[i][j];
    }
    return sum;
}