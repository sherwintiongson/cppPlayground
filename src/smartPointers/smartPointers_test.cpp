
#include <iostream>
#include <smartPointers.hpp>
#include <smartPointers_test.hpp>
#include <memory>

void referenceTest1(void)
{
  // reference as function parameters
  // a very good replacement for pointers as function parameters
  smartPointers obj;
  uint32_t x = 48;
  obj.reference(x);

  // reference as Returning Values from Functions
  // this is a good solution for getter functions
  obj.setTimer(789);
  std::cout << "Timer = " << obj.getTimer() << std::endl;
}

void traditionalPointerTest3(void)
{
  // traditional pointer
  smartPointers obj;

  // dynamic memory allocation
  uint32_t* count = new uint32_t(485);

  // we delete the object properly to introduced an invalid pointer
  delete count;
  count = nullptr;

  // test
  obj.traditionalPointer(count);
}

void traditionalPointerTest2(void)
{
  // traditional pointer
  smartPointers obj;

  // dynamic memory allocation
  uint32_t* count = new uint32_t(485);

  // Improper delete of object cannot be detected
  delete count;
  //count = nullptr;   // always do this when deleting an object

  // test
  obj.traditionalPointer(count);
}

void traditionalPointerTest1(void)
{
  // traditional pointer
  smartPointers obj;
  uint32_t count = 48;
  obj.traditionalPointer(&count);
}

void smartPointers_test(void)
{
  traditionalPointerTest1();
  traditionalPointerTest2();
  traditionalPointerTest3();
  referenceTest1();
}