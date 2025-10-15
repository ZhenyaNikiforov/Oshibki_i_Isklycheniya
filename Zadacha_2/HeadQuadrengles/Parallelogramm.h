#pragma once
#include <iostream>
#include <Windows.h>
#include "./Quadrangle.h"

class Parallelogram : public Quadrangle //-Параллелограмм
{
public:
  Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
  {
    SetConsoleOutputCP(CP_UTF8);
    if (!((a == c) && (b == d)) || !((A == C) && (B == D)))
    {
      throw std::invalid_argument("Параллелограмм: стороны или углы не равны!");
    }
  }
};