#include <iostream>
#include "function.hpp"
#include <string>

void test_functionOverloading(void)
{
  /* Function overloading in C++ allows you to define multiple 
  functions with the same name but with different parameter lists. 
  This feature enables you to use the same function name to perform 
  different tasks based on the types and/or number of arguments passed 
  to it. 
  
  Key points about function overloading:

  Functions must differ in their parameter list (type, number, or order 
  of parameters). Return type alone doesn't differentiate overloaded 
  functions.Overloaded functions are resolved at compile-time (static 
  polymorphism).
  

  Key Considerations when using it for Microcontroller as a target:
  - Overloaded functions can increase compilation time because the compiler 
    needs to handle and resolve multiple versions of the function.
  - Some microcontroller architectures may have limitations on features 
    supported by the C++ compiler. Ensure that the compiler you are using 
    supports function overloading.
  - Function overloading requires the compiler to maintain additional information 
    to resolve which function to call, which could impact code size and performance.
    */

  functions obj;

  std::cout << std::endl;
  std::cout << obj.getResult(50, 40);
  std::cout << std::endl;
  std::cout << obj.getResult("Sherwin", " Tiongson");
}

void test_functionsReference(void)
{
  functions obj;
  uint32_t RefInC = 0; 
  uint32_t RefInCpp = 0;

  std::cout << "RefInC = " << RefInC << std::endl;
  std::cout << "RefInCpp = " << RefInCpp << std::endl;

  obj.passbyReferenceInCAndCpp(&RefInC, RefInCpp);

  std::cout << "RefInC = " << RefInC << std::endl;
  std::cout << "RefInCpp = " << RefInCpp << std::endl;
}

void test_functions()
{
  test_functionsReference();
  test_functionOverloading();
}