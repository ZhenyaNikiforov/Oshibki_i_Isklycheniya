#include <iostream>
#include <Windows.h>
#include "./HeadTriangels/Triangle.h"
#include "./HeadTriangels/RightTriangle.h"
#include "./HeadTriangels/IsoscelesTriangle.h"
#include "./HeadTriangels/EquilateralTriangle.h"
#include "./HeadQuadrengles/Quadrangle.h"
#include "./HeadQuadrengles/Rectangle.h"
#include "./HeadQuadrengles/Square.h"
#include "./HeadQuadrengles/Parallelogramm.h"
#include "./HeadQuadrengles/Rhombus.h"
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  try
  {
    Triangle tr(10, 20, 30, 50, 60, 70); //-Треугольник;
    cout << "\nТреугольник: \n";
    tr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    RightTriangle rtr(10, 20, 30, 50, 39, 91); //-Прямоугольный треугольник (сумма 180, но С не 90);
    cout << "\nПрямоугольный треугольник:\n";
    rtr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    RightTriangle rtr(10, 20, 30, 50, 39, 90); //-Прямоугольный треугольник (сумма не 180, С 90);
    cout << "\nПрямоугольный треугольник:\n";
    rtr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    RightTriangle rtr(10, 20, 30, 50, 40, 90); //-Прямоугольный треугольник (сумма 180, С 90);
    cout << "\nПрямоугольный треугольник:\n";
    rtr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    IsoscelesTriangle itr(10, 20, 10, 50, 80, 50); //-Равнобедренный треугольник;
    cout << "\nРавнобедренный треугольник:\n";
    itr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    IsoscelesTriangle itr(10, 20, 10, 50, 79, 51); //-Равнобедренный треугольник, углы не равны, сумма 180;
    cout << "\nРавнобедренный треугольник:\n";
    itr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    IsoscelesTriangle itr(10, 20, 10, 50, 81, 50); //-Равнобедренный треугольник, углы равны, сумма не 180;
    cout << "\nРавнобедренный треугольник:\n";
    itr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    EquilateralTriangle etr(30, 30, 30, 60, 60, 60); //-Равносторонний треугольник;
    cout << "\nРавносторонний треугольник:\n";
    etr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    EquilateralTriangle etr(30, 30, 30, 60, 59, 61); //-Равносторонний треугольник, углы разные, сумма 180;
    cout << "\nРавносторонний треугольник:\n";
    etr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Quadrangle qa(10, 20, 30, 40, 50, 60, 71, 80); //-Четырёхугольник, сумма углов не 360;
    cout << "\nЧетырёхугольник:\n";
    qa.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Quadrangle qa(10, 20, 30, 40, 80, 100, 100, 80); //-Четырёхугольник, сумма углов 360;
    cout << "\nЧетырёхугольник:\n";
    qa.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  };

  try
  {
    Rectangl rc(10, 20, 10, 20, 90, 90, 90, 91); //-Прямоугольник, сумма углов не 360;
    cout << "\nПрямоугольник:\n";
    rc.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  };

  try
  {
    Rectangl rc(10, 20, 10, 20, 90, 90, 89, 91); //-Прямоугольник, сумма углов 360, углы не прямые;
    cout << "\nПрямоугольник:\n";
    rc.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Rectangl rc(10, 20, 10, 20, 90, 90, 90, 90); //-Прямоугольник, сумма углов 360, углы прямые;
    cout << "\nПрямоугольник:\n";
    rc.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Square sq(20, 20, 20, 20, 90, 90, 90, 90); //-Квадрат, стороны равны, углы 90;
    cout << "\nКвадрат:\n";
    sq.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Square sq(20, 20, 20, 20, 90, 90, 89, 91); //-Квадрат, стороны равны, углы не 90;
    cout << "\nКвадрат:\n";
    sq.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Parallelogram pr(20, 30, 20, 30, 140, 40, 140, 40); //-Параллелограмм, правильный;
    cout << "\nПараллелограмм:\n";
    pr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Parallelogram pr(20, 30, 20, 30, 140, 41, 140, 39); //-Параллелограмм, углы разные;
    cout << "\nПараллелограмм:\n";
    pr.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Rhombus rb(30, 30, 30, 30, 30, 150, 30, 150); //-Ромб правильный;
    cout << "\nРомб:\n";
    rb.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  try
  {
    Rhombus rb(30, 30, 30, 30, 29, 150, 31, 150); //-Ромб с разными углами;
    cout << "\nРомб:\n";
    rb.print_info();
  }
  catch (const invalid_argument &e)
  {
    cout << "\n"
         << e.what() << "\n";
  }

  return 0;
}