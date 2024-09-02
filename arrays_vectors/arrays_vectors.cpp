#include <iostream>
#include <cstdint>
#include <cstring> // in C++, avoid using string.h
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

/**
 * @brief Explore the difference between C string and C++ String. 
 * 
 * How it works:
 *  - In C, strings are low-level and require the user to manage memory manually. Strings are 
 *    represented as null-terminated character arrays.
 * 
 *  - In C++, strings are managed by the std::string class, which provides high-level 
 *    functionality, safety, and ease of use with automatic memory management.
 * 
 *  - The C++ string is much more powerful and convenient, while the C string offers 
 *    more control but at the cost of complexity and potential for errors.
 * 
 *  - Main differences are:
 *              C                                                        C++
 *      Type	char[] or char*	                                      std::string
 *      Memory Management	Manual (with malloc, free, etc.)	        Automatic
 *      Assignment	Requires strcpy	                                Direct assignment (=)
 *      Concatenation	Requires strcat	                              + operator
 *      Comparison	Requires strcmp	                                Direct comparison (==, <, etc.)
 *      Prone to errors like buffer overflows	                      Safer with bounds checking
 *      Less user-friendly	                                        Intuitive and more powerful
 */
void arrays_vectors::cStringVersusCppString(void)
{
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  strcpy (str2,str1);
  strcpy (str3,"copy successful");
  std::cout << str1 << str2 << str3 << std::endl;

  std::string message[4] = {"Hello ", "World", "and", "Geeks"};
  std::string result = message[0] + message[1];  // "Hello World"
  std::cout << result << std::endl;

  for (std::string text : message)
  {
    std::cout << text << std::endl;
  }

  for (size_t i = 0; i < 4; i++)
  {
    std::cout << message[i] << std::endl;
  }
}