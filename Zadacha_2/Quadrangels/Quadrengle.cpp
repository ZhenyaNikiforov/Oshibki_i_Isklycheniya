#include <iostream>
#include <Windows.h>
#include "../HeadQuadrengles/Quadrangle.h"
using namespace std;

void Quadrangle::print_info()
{
  SetConsoleOutputCP(CP_UTF8);
  cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << " d=" << this->d << endl;
  cout << "Углы: А=" << this->A << " B=" << this->B << " C=" << this->C << " D=" << this->D << endl;
};