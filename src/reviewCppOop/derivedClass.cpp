#include <iostream>
#include <string>
#include <cstdint>
#include "derivedClass.hpp"

/*
 * @brief Constructor of Dog object
 *
 */
Dog::Dog(std::string name,  uint16_t weigth, std::string breed)
{
  this->breed = breed;
  this->setName(name);
  this->setWeight(weigth);
  this->testAccess = 4;
}

/*
 * @brief Constructor of Dog object
 *
 */
Dog::~Dog()
{
  this->publicMember = 0;
  this->protectedMember = 0;
}

/*
 * @brief Returns the breed
 *
 */
std::string Dog::getBreed(void) const
{
  return this->breed;
}

/*
 * @brief Will dig a hole
 *
 */
void Dog::digHole(void)
{
  std::cout << "I am digging a hole" << std::endl;
}

/*
 * @brief Returns noise string
 *
 */
std::string Dog::makeNoise(void) const
{
  return "Aw! aw! aw!";
}