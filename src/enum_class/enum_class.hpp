/**@file    enum_class.hpp
 *
 * @brief   We compare traditional enum and enum class
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-08
 */


/*

  In C++, enum class (also known as a scoped enumeration) is an improved version of the 
  traditional enum that enhances type safety and resolves some issues associated with 
  unscoped enums. It was introduced in C++11 and has several advantages over the older style.

  Using enum class in C++ is considered a best practice when you need type-safe enumerations. 
  It prevents naming conflicts, enforces strict typing, and offers better control over the 
  underlying data type. This makes it superior to traditional enum, especially in large 
  projects or codebases where type safety and clarity are paramount.

  Advantages of enum class:
    - No Namespace Pollution: Enumerators are scoped to the enum, preventing naming conflicts.
    - Type Safety: Strongly typed, avoiding accidental implicit conversions and mixed usage of 
        unrelated enumerations.
    - Control Over Underlying Type: Ability to define the underlying type, improving performance 
       or compatibility when needed.

  Limitations of enum class:
    - Verbosity: Requires prefixing the enum values with the enum type (e.g., Color::Red), which 
    can make code more verbose compared to unscoped enums.
    - No Implicit Conversion to Integer: You have to explicitly cast to an integer if you need 
    the underlying value (which is typically good for type safety but can be inconvenient).


*/

#ifndef _ENUM_CLASS_H_
#define _ENUM_CLASS_H_

#include <cstdint>
#include <iostream>

class enumClass
{
  public:
    enum class Direction : uint16_t {FORWARD, BACKWARD, RIGHT, LEFT, UP, DOWN};
    enum Colors {RED, GREEN, BLUE};

    enumClass();  // 1st constructor
    ~enumClass();

  private:
  Direction arrow = Direction::BACKWARD;
  Colors pencil = GREEN;

  public:
    static void testEnumClass(void)
    {
      // size should be 2 because type is uint16_t
      std::cout << "Direction size = " << sizeof(Direction) << std::endl;
      std::cout << "arrow size = " << sizeof(arrow) << std::endl;

      // Default size of traditional enum is int, which is 4
      std::cout << "Colors size = " << sizeof(Colors) << std::endl;
      std::cout << "pencil size = " << sizeof(pencil) << std::endl;
    }
};

#endif /* _ENUM_CLASS_H_ */

/** @} */
/* End of file */