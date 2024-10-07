#include <iostream>
#include "smartPointers.hpp"
#include <memory>

/**
 * @brief Constructor of arrays_vectors
 * 
 */
smartPointers::smartPointers()
{

}

/**
 * @brief Destructor of arrays_vectors
 * 
 */
smartPointers::~smartPointers()
{

}

void smartPointers::traditionalPointer(uint32_t* ptr)
{
  // possiblity of invalid pointer can happen
  if(nullptr != ptr)
  {
    std::cout << " ptr value = " << *ptr << std::endl;
  }
  else
  {
    std::cout << " invalid pointer = " << ptr << std::endl;
  }
}

// Using const references allows you to pass large objects to functions without 
// copying while ensuring that the function does not modify the original object.
void smartPointers::reference(const uint32_t& ref)
{
  // no need to check, its always valid
  std::cout << " ref value = " << ref << std::endl;
}


void processUniquePtr(std::unique_ptr<uint32_t> ptr)
{
  std::cout << "Value: " << *ptr << std::endl; // Dereference to get the value
}


uint16_t& smartPointers::getTimer(void)
{
  return this->timer;
}


void smartPointers::setTimer(uint16_t timer)
{
  this->timer = timer;
}