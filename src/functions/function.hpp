/**@file    function.hpp
 *
 * @brief   Comparing C and C++ function
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-06
 */

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <cstdint>
#include <string>

class functions
{
private:

public:
  functions();
  ~functions();
  void passbyReferenceInCAndCpp(uint32_t* RefInC, uint32_t& RefInCpp) const;
  uint32_t getResult(uint16_t x, uint16_t y) const;
  std::string getResult(std::string firstName, std::string lastName) const;
};

#endif /* _FUNCTION_H_ */

/** @} */
/* End of file */