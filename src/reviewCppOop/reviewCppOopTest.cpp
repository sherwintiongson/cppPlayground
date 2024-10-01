#include <iostream>
#include <string>
#include "reviewCppOop.hpp"
#include "reviewCppOopTest.hpp"
#include "derivedClass.hpp"

/**
 * @brief Test aggregator CCP_OOP tests
 * 
 */
void test_reviewCppOop(void)
{
  ANIMAL obj1("Cat", 15);
  ANIMAL obj2;
  Dog dog("Arnold", 10, "Chiwawa");

  obj1.publicMember = 99;
  std::cout << "Animal name is: " << obj1.getName() << std::endl;
  std::cout << "Animal weight is: " << obj1.getWeight() << std::endl;
  std::cout << "Animal noise is: " << obj1.makeNoise() << std::endl;

  std::cout << "Animal name is: " << obj2.getName() << std::endl;
  std::cout << "Animal weight is: " << obj2.getWeight() << std::endl;
  std::cout << "Animal noise is: " << obj2.makeNoise() << std::endl;

  std::cout << "Dog name is: " << dog.getName() << std::endl;
  std::cout << "Dog weight is: " << dog.getWeight() << std::endl;
  std::cout << "Dog noise is: " << dog.makeNoise() << std::endl;
  std::cout << "Dog breed is: " << dog.getBreed() << std::endl;
  dog.digHole();
}

