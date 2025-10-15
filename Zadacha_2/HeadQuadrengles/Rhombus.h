#pragma once
#include <iostream>
#include <Windows.h>
#include "./Quadrangle.h"

class Rhombus : public Quadrangle //-Ромб
{
public:
  Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D)
  {
    SetConsoleOutputCP(CP_UTF8);
    if (!((a == b) && (b == c) && (c == d)) || !((A == C) && (B == D)))
    {
      throw std::invalid_argument("Ромб: стороны или углы не равны");
    }
  }
};