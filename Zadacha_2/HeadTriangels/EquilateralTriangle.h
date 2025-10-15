#pragma once
#include <iostream>
#include "./Triangle.h"

class EquilateralTriangle : public Triangle //-Равносторонний
{
public:
  EquilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
  {
    if (!((a == b) && (b == c)) || !((A == B) && (B == C) && (C == 60)))
    {
      throw std::invalid_argument("Ne ravnostoronnij!");
    }
  };
};