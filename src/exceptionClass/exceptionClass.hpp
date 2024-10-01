/**@file    exceptionClass.hpp
 *
 * @brief   We will recall C++ exception features
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-09
 */

#ifndef _EXCEPTION_CLASS_H_
#define _EXCEPTION_CLASS_H_

#include <cstdint>
#include <vector>

class exceptionClass
{
private:
  int getElementAt(const std::vector<int>& vec, size_t index);
  
public:
  exceptionClass();
  ~exceptionClass();
  void outOfBoundsException(void);
  void logicErrorException(void);
};

#endif /* _HOUSE_H_ */

/** @} */
/* End of file */



