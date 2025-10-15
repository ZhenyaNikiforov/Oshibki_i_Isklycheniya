#include <iostream>
#include <Windows.h>
#include "../HeadTriangels/Triangle.h"
using namespace std;

void Triangle::print_info()
{
  SetConsoleOutputCP(CP_UTF8);
  cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << endl;
  cout << "Углы: А=" << this->A << " B=" << this->B << " C=" << this->C << endl;
}