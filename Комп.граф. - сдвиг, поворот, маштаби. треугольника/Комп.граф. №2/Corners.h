#pragma once
#include <iostream>
#include <ctype.h>
#include <conio.h>
#include "graphics.h"
#pragma comment(lib,"graphics.lib")
using namespace std;

class Corners
{
public:
	float x;
	float y;
	float z;

	Corners()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Corners(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Konvert(float SHIFT_2)
	{
		z = x * SHIFT_2 + y * SHIFT_2 + z;
	}

	void operator = (Corners& A)
	{
		this->x = A.x;
		this->y = A.y;
		this->z = A.z;
	}



	friend void FOO(Corners& A, Corners& B, Corners& C, float& Cab, float& Cac, float& Cbc, float& Kab1, float& Kab2, float& Bab, float& Kac1, float& Kac2, float& Bac,
		float& Kbc1, float& Kbc2, float& Bbc, float& Max_x, float& Max_y, float& Min_x, float& Min_y, float SHIFT_2);
	friend float FOO_SUPPORT(Corners& A, Corners& B, Corners& C, float& Cab, float& Cac, float& Cbc, float& Kab1, float& Kab2, float& Bab, float& Kac1, float& Kac2, float& Bac,
	float& Kbc1, float& Kbc2, float& Bbc, float& Max_x, float& Max_y, float& Min_x, float& Min_y);
	friend void FOO2(Corners& A, Corners& B, Corners& C, Corners& D, float& Turn);
	friend void FOO3(Corners& A, Corners& B, Corners& C, Corners& D, float& Turn);
	friend void FOO4(Corners& A, Corners& B, Corners& C, Corners& D, float& Turn);
};
