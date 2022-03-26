#pragma once
#include <iostream>

class Matrix
{
private:
	float** a;
	int rowCount;
	int colCount;

public:
	float getB() const { return **a; };
	int getRows() const { return rowCount; };
	int getCols() const { return colCount; };

	void setRows(int rowCount);
	void setCols(int colCount);
	void setB(float** b);

	bool Init(int x, int y);
	void Display() const;
	void Read();

	void Create(float**a, int rowCount, int colCount, const int Low, const int High);
	void Print(float**a);

	int Max(float** a, int rowCount, int colCount);
	int Min(float** a, int rowCount, int colCount);
	int Summa(float** a, int rowCount, int colCount);
};