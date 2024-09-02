#include <iostream>
#include "arrays_vectors.hpp"

void test_arrays_vectors(void)
{
  arrays_vectors obj;
  obj.builtInArraysNotInitialized();
  obj.builtInArraysInitialized();
  obj.cStringVersusCppString();
}