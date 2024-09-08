#include <iostream>
#include "house.hpp"

/*
 * @brief First constructor of house object
 * 
 */
house::house()
{ 
  this->color = "";
  this->numberOfStories = 0;
  this->numberOfWindows = 0;
  std::cout << "House object created using 1st constructor!" << this->age << std::endl;
}

/**
 * @brief Second constructor of house object
 * 
 */
house::house( uint16_t numberOfStories,
              std::string color,
              uint16_t numberOfWindows)
{
  this->color = color;
  this->numberOfStories = numberOfStories;
  this->numberOfWindows = numberOfWindows;
  std::cout << "House object created using 2nd constructor!" << std::endl;
}

/**
 * @brief Destructor of house object
 * 
 */
house::~house()
{ 
  std::cout << "House object destroyed!" << std::endl;
}

void house::setNumberOfStories(uint16_t numberOfStories)
{
  this->numberOfStories = numberOfStories;
}

uint16_t house::getNumberOfStories(void) const
{
  return this->numberOfStories;
}

void house::setColor(std::string color)
{
  this->color = color;
}

std::string house::getColor(void) const
{
  return this->color;
}

void house::setNumberOfWindows(uint16_t numberOfWindows)
{
  this->numberOfWindows = numberOfWindows;
}

uint16_t house::getNumberOfWindows(void) const
{
  return this->numberOfWindows;
}