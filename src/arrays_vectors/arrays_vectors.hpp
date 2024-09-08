/**@file    arrays_vectors.hpp
 *
 * @brief   Class to review the basic sequence containers in C++
 *
 * @author  Sherwin Tiongson
 * @date    2024-08-30
 */

#ifndef _ARRAYS_VECTORS_H_
#define _ARRAYS_VECTORS_H_

#include <cstdint>

class arrays_vectors
{
private:

public:
  arrays_vectors();
  ~arrays_vectors();
  void builtInArraysNotInitialized(void) const;
  void builtInArraysInitialized(void) const;
  void cStringVersusCppString(void) const;
  void classArray_WhenToUseIt(void) const;
  void vectorClass_WhenToUseIt(void) const;
  void multiDimBuiltInArray(void) const;
  void multiDimClassArray(void) const;
  void keyboardToClassArray(void) const;
  void keyboardToVectorClass(void) const;
};

#endif /* _ARRAYS_VECTORS_H_ */

/** @} */
/* End of file */