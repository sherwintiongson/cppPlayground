#include <cstdint>
#include <iostream>
#include "templates.hpp"

void testMyTemplate1(void);
void testMyTemplate2(void);
void testMyTemplate3(void);

void test_templateFunctions(void)
{
  testMyTemplate1();
  testMyTemplate2();
  testMyTemplate3();
}

void testMyTemplate1(void)
{
  uint16_t a = 50;
  uint16_t b = 5;  // if b is uint32_t, it will not work

  // a & b must be of the same type, because addValue() function
  // defines onle one template parameter type T
  std::cout << "Result = " << addValue(a, b) << std::endl;
}

void testMyTemplate2(void)
{
  uint16_t a = 500;
  uint32_t b = 5;  // if b is uint32_t, it will not work

  // a & b can be of differenttype, because addValue() function
  // defines two template parameter types T1 and T2
  std::cout << "Result = " << subtractValue(a, b) << std::endl;
}


void testMyTemplate3(void)
{
  uint16_t a = 50;
  uint32_t b = 5;  // if b is uint32_t, it will not work
  float c = 5.01;

  // a & b can be of differenttype, because addValue() function
  // defines two template parameter types T1 and T2
  std::cout << "Result = " << multiplyValues(a, b, c) << std::endl;
}