#pragma once
#include <iostream>
#include "./Triangle.h"

class IsoscelesTriangle : public Triangle //-Равнобедренный
{
public:
  IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
  {
    if ((a != c) || (A != C))
    {
      throw std::invalid_argument("Storonyi ili uglyi ne ravnyi!");
    }
  };
};