#pragma once
#include <iostream>
#include <Windows.h>
#include "./Quadrangle.h"

class Rectangl : public Quadrangle //-Прямоугольник
{
public:
  Rectangl(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
  {
    SetConsoleOutputCP(CP_UTF8);
    if (!((a == c) && (b == d)) || !((A == B) && (B == C) && (C == D) && (D == 90)))
    {
      throw std::invalid_argument("Неравные стороны или углы!");
    }
  }
};