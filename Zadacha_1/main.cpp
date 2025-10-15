#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
  SetConsoleOutputCP(CP_UTF8);
  if (str.length() == forbidden_length)
  {
    throw std::invalid_argument("Слово непредусмотренной длины. Завершение.");
  };

  return str.length();
};

int main()
{
  int forbiddenLength = 0;
  std::string word = "";

  std::cout << "Vvedite zapretnuy dlinu: ";
  std::cin >> forbiddenLength;

  while (true)
  {
    std::cout << "Vvedite slovo: ";
    std::cin >> word;

    try
    {
      function(word, forbiddenLength);
    }
    catch (const std::invalid_argument &e)
    {
      std::cout << e.what() << std::endl;
      break;
    };

    std::cout << "Dlina slova \"" << word << "\" ravna " << function(word, forbiddenLength) << std::endl;
  };
  return 0;
};