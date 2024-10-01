#include <iostream>
#include <vector>
#include <stdexcept>
#include "exceptionClass.hpp"

exceptionClass::exceptionClass(/* args */)
{
}

exceptionClass::~exceptionClass()
{

}

void exceptionClass::outOfBoundsException(void)
{
  try
  {
    std::vector<std::string> storage = {"One", "Two", "Three", "Four", "Five"};
    for (std::string eachElement : storage)
    {
      std::cout << eachElement << std::endl;
    }

    // this will generate an exception
    storage.at(6) = "Ten";
  }
  catch(const std::exception& err)
  {
    std::cout << err.what() << std::endl;
  }
}


void exceptionClass::logicErrorException(void)
{
  try
  {
    std::vector<int> numbers = {1, 2, 3};
    int value = this->getElementAt(numbers, 5);  // Index out of bounds
    std::cout << "Value: " << value << std::endl;
  }
  catch(const std::out_of_range& err)
  {
    // rethrow an exception
    throw;
  }
}


int exceptionClass::getElementAt(const std::vector<int>& vec, size_t index) 
{
    if (index >= vec.size()) 
    {
        // throw.. the originator of exception
        throw std::out_of_range("Exception! Index out of range");
    }
    return vec.at(index);
}