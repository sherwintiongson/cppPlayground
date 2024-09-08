#include <iostream>
#include "function.hpp"

/**
 * @brief Constructor of arrays_vectors
 * 
 */
functions::functions()
{
}

/**
 * @brief Destructor of arrays_vectors
 * 
 */
functions::~functions()
{
}

/**
 * @brief Destructor of arrays_vectors
 * 
 * 1.) C does not have native support for references like C++ does, so we use Pointer in C. 
 * 2.) C++ supports actual references as a feature of the language. Easy to use and less error prone
 * 
 * 
 */
void functions::passbyReferenceInCAndCpp(uint32_t* RefInC, uint32_t& RefInCpp) const
{
  // In C, we need to dereference the pointer to modify the original value.
  *RefInC = *RefInC + 10;

  // In C++, NO need to dereference to modify the original value.
  RefInCpp = RefInCpp + 20;

}

uint32_t functions::getResult(uint16_t x, uint16_t y) const 
{
  return (x+y);
}


std::string functions::getResult(std::string firstName, std::string lastName) const
{
  return (firstName + lastName);
}