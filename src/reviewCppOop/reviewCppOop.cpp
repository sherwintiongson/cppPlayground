#include <iostream>
#include <string>
#include <cstdint>
#include "reviewCppOop.hpp"
/*

1.) Public Members:
  - Public members are accessible from anywhere in the program, including from outside the class.
  - This is the least restrictive access specifier.

2.) Private Members
  - Private members are accessible only from within the class that defines them. They are not accessible 
    from outside the class, including derived classes.
  - Private access is the most restrictive access level and is used to enforce encapsulation by hiding implementation details.

3.) Protected Members
  - Protected members are accessible from within the class and from derived classes, but not from outside the class.
  - This access specifier is useful in inheritance scenarios where you want derived classes to have access to base 
    class members, but you want to restrict external access.

4.) Public Inheritance
  - Public members of the base class remain public in the derived class.
  - Protected members of the base class remain protected in the derived class.
  - Private members of the base class are not accessible in the derived class.

5.) Protected Inheritance
  - Public members of the base class become protected in the derived class.
  - Protected members of the base class remain protected in the derived class.
  - Private members of the base class are not accessible in the derived class.

6.) Private Inheritance
  - Public and protected members of the base class become private in the derived class.
  - Private members of the base class are not accessible in the derived class.
*/

/*
 * @brief Constructor of CCP_OOP object
 *
 */
ANIMAL::ANIMAL()
{
  this->name = "unknown";
  this->weigth = 0;
  this->privateMember = 0;
  this->publicMember = 0;
  this->protectedMember = 0;
}

/*
 * @brief Constructor of CCP_OOP object
 *
 */
ANIMAL::ANIMAL(std::string name,  uint16_t weigth)
{
  this->name = name;
  this->weigth = weigth;
}

/*
 * @brief Destructor of CCP_OOP object
 *
 */
ANIMAL::~ANIMAL()
{

}

std::string ANIMAL::getName(void) const
{
  return this->name;
}

void ANIMAL::setName(std::string name)
{
  this->name = name;
}

uint16_t ANIMAL::getWeight(void) const
{
  return this->weigth;
}

void ANIMAL::setWeight(uint16_t weight)
{
  this->weigth = weight;
}

std::string ANIMAL::makeNoise(void) const
{
  return "Unknown";
}