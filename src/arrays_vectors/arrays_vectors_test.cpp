#include <iostream>
#include "arrays_vectors.hpp"

#define SKIP_THIS  0

void test_arrays_vectors(void)
{
  arrays_vectors obj;
  obj.builtInArraysNotInitialized();
  obj.builtInArraysInitialized();
  obj.cStringVersusCppString();
  obj.classArray_WhenToUseIt();
  obj.vectorClass_WhenToUseIt();
  obj.multiDimBuiltInArray();
  obj.multiDimClassArray();

  #if SKIP_THIS
  obj.keyboardToClassArray();
  obj.keyboardToVectorClass();
  #endif


}