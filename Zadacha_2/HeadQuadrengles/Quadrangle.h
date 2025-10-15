#pragma once
#include <iostream>
#include <Windows.h>
// #include "../HeadTriangels/Triangle.h"
using namespace std;

class Quadrangle //-Обычный четырёхугольник
{
public:
  Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
  {
    if ((A + B + C + D) != 360)
    {
      throw invalid_argument("Summa uglov ne 360!");
    }

    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;

    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
  };
  void print_info();

protected:
  int a;
  int b;
  int c;
  int d;

  int A;
  int B;
  int C;
  int D;
};