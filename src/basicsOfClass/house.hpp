/**@file    house.hpp
 *
 * @brief   We will recall C++ class basic
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-08
 */

#ifndef _HOUSE_H_
#define _HOUSE_H_

#include <cstdint>
#include <string>

class house
{
private:
  uint16_t numberOfStories;
  std::string color;
  uint16_t numberOfWindows;
  const uint16_t age = 40;

public:
  house();  // 1st constructor
  house(uint16_t numberOfStories, // 2nd constructor(override)
              std::string color,
              uint16_t numberOfWindows);
  ~house();
  void setNumberOfStories(uint16_t numberOfStories);
  uint16_t getNumberOfStories(void) const;
  void setColor(std::string color);
  std::string getColor(void) const;
  void setNumberOfWindows(uint16_t numberOfWindows);
  uint16_t getNumberOfWindows(void) const;
};

#endif /* _HOUSE_H_ */

/** @} */
/* End of file */