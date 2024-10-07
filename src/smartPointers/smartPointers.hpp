/**@file    smartPointers.hpp
 *
 * @brief   Comparing traditional pointers, reference  and smart pointers
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-06
 */

#ifndef _SMART_POINTERS_H_
#define _SMART_POINTERS_H_

#include <cstdint>
#include <string>
#include <memory>

class smartPointers
{
private:
  uint16_t timer = 0;

public:
  smartPointers();
  ~smartPointers();
  void traditionalPointer(uint32_t* ptr);
  void reference(const uint32_t& ref);
  uint16_t& getTimer(void);
  void setTimer(uint16_t timer);
  void processUniquePtr(std::unique_ptr<uint32_t> ptr);

protected:

};

#endif /* _SMART_POINTERS_H_ */

/** @} */
/* End of file */