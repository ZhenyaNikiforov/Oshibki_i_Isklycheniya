#include <iostream>

int function(std::string str, int forbidden_length)
{
  try
  {
    if (str.length() == forbidden_length)
    {
      throw std::exception();
    };
  }
  catch (const std::exception &e)
  {
    return -1;
  }

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
    int result = function(word, forbiddenLength);
    if (result == -1)
    {
      std::cout << "Slovo zapretnoj dlinyi!\n";
      break;
    };
    std::cout << "Dlina slova \"" << word << "\" ravna " << result << std::endl;
  };
  return 0;
};