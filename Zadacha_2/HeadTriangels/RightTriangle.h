#pragma once
#include <iostream>
#include "./Triangle.h"

class RightTriangle : public Triangle //-Прямоугольный
{
public:
  RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C)
  {
    if (C != 90)
    {
      throw std::invalid_argument("Ugol \"C\" ne raven 90!");
    }
  };
};