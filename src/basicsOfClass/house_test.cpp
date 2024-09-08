#include <iostream>
#include <string>
#include "house.hpp"

house h1(1, "White", 10);
house h2;

  /**
   * @brief Aggregator for house tests
   * 
   */
void test_house(void)
{
    std::cout << "First house is color " 
            << h1.getColor()
            << ", "
            << h1.getNumberOfStories()
            << " stories and "
            << h1.getNumberOfWindows()
            << " windows."
            << std::endl;

  std::cout << "Second house is color " 
          << h2.getColor()
          << ", "
          << h2.getNumberOfStories()
          << " stories and "
          << h2.getNumberOfWindows()
          << " windows."
          << std::endl;

  h1.setColor("White");
  h1.setNumberOfStories(2);
  h1.setNumberOfWindows(10);
  h2.setColor("Yellow");
  h2.setNumberOfStories(3);
  h2.setNumberOfWindows(15);

  std::cout << "First house is color " 
            << h1.getColor()
            << ", "
            << h1.getNumberOfStories()
            << " stories and "
            << h1.getNumberOfWindows()
            << " windows."
            << std::endl;

  std::cout << "Second house is color " 
          << h2.getColor()
          << ", "
          << h2.getNumberOfStories()
          << " stories and "
          << h2.getNumberOfWindows()
          << " windows."
          << std::endl;
}
