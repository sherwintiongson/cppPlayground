#include <iostream>
#include <string>
#include <stdexcept>
#include "exceptionClass.hpp"
#include "exceptionClass_test.hpp"

void test_exceptionClass(void)
{
  try
  {
    exceptionClass obj;
    obj.outOfBoundsException();
    obj.logicErrorException();
  }
  catch(const std::exception& e)
  {
    std::cout << e.what() << '\n';
  }
}