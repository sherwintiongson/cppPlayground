#include <iostream>
#include "static_member.hpp"

// Static members must be defined outside of the class
uint16_t staticMember::staticAttribute = 0;

staticMember::staticMember()
{
  this->staticAttribute = 0;
}

staticMember::~staticMember()
{

}

void staticMember::printStaticAttribute(void) const
{
   std::cout << "staticAttribute = " << this->staticAttribute << std::endl;
}

void staticMember::setStaticAttribute(uint16_t newAtt)
{
  this->staticAttribute = newAtt;
}

uint16_t staticMember::getStaticAttribute(void) const
{
  return this->staticAttribute;
}

