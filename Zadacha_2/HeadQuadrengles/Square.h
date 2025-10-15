#pragma once
#include <iostream>
#include <Windows.h>
#include "./Quadrangle.h"

class Square : public Quadrangle //-Квадрат
{
public:
  Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
  {
    SetConsoleOutputCP(CP_UTF8);
    if (!((a == b) && (b == c) && (c == d)) || !((A == B) && (B == C) && (C == D) && (D == 90)))
    {
      throw std::invalid_argument("Стороны не равны или углы не равны 90.");
    }
  }
};