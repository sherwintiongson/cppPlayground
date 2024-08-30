#include <iostream>
#include <cstdint>
#include "arrays_vectors.hpp"

/*
  In C++, the initialization of local variables (including local arrays) occurs 
  at runtime, specifically during the function call when the local variable is 
  created. This process is different from initialization of global or static 
  variables, which is handled at compile time or startup.

  Local variables, including arrays, are allocated on the stack when a function 
  is called. This allocation happens at runtime. Local variables are initialized 
  each time the function is called, and they are initialized during the execution 
  of the function’s body. If the variable has an initializer, that initialization 
  happens at this time.

  Variables with static storage duration (e.g., global variables, static local variables, 
  and static member variables) are initialized before main() starts executing. 
  This initialization happens at startup and is typically handled during the program’s 
  initialization phase, not during each function call. This ensures that these variables 
  are ready to be used when main() and any other functions are executed.

  It is the  __main in Startup Code that initialized global and static variables.

  __main calls the main(), also called User's Code
*/

/**
 * @brief Constructor of arrays_vectors
 * 
 */
arrays_vectors::arrays_vectors()
{
}

/**
 * @brief Destructor of arrays_vectors
 * 
 */
arrays_vectors::~arrays_vectors()
{
}

/**
 * @brief A function showing zero initialization. 
 * 
 * How it works:
 * All elements of myArray are set to 0. This is effectively done in a single operation, 
 * but conceptually, it initializes each element to zero.
 * 
 */
void arrays_vectors::builtInArraysNotInitialized(void)
{
  const uint8_t LEN = 5;
  uint8_t myArray[LEN]= {};  // Zero initialization

  for (uint8_t i = 0; i < LEN; i++)
  {
    std::cout << "myArray["<< static_cast<int>(i) << "] = " << static_cast<int>(myArray[i]) << std::endl;
  }
}

/**
 * @brief A function showing direct initialization. 
 * 
 * How it works:
 * Local variables, including arrays, are allocated on the stack when a function is called.
 * variable initialization happens element by element, but it’s done in a single step during 
 * runtime when the function is called.
 * 
 */
void arrays_vectors::builtInArraysInitialized(void)
{
  const uint8_t LEN = 5;
  uint8_t myArray[LEN] = {100, 101, 102, 103, 104};

  for (uint8_t i = 0; i < LEN; i++)
  {
    std::cout << "myArray["<< static_cast<int>(i) << "] = "<< static_cast<int>(myArray[i]) << std::endl;
  }
}