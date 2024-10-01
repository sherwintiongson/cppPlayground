/**@file    static_member.hpp
 *
 * @brief   We will recall C++ class static member
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-08
 */


/*
Use Cases for Private Static Members:
 - To store information shared among all instances of the class (e.g., 
   a counter, configuration settings, or common resources).
 - To maintain internal state that shouldn’t be accessed or modified 
    directly by code outside the class.


Best Practices for Using Static Members:

  - Use Static Variables Only When Shared State is Necessary: Only introduce static variables if the 
  concept of shared state is required. Avoid them if each instance should maintain its own state.

  - Limit Static Member Functions to Utility Functions: If you have a function that logically belongs 
  to a class but doesn’t need instance-specific data, consider making it static. However, don't overuse 
  them, as it can lead to inflexibility.

   - Use Static Methods for Singleton or Factory Patterns: In certain design patterns like the Singleton 
  or Factory patterns, static methods can help you control object creation and provide a globally 
  accessible instance of a class.

  - Minimize Global State: Avoid static members when they introduce unnecessary global state. Carefully 
  consider if the member should truly be static or if a more appropriate design (like dependency 
  injection) can be used to avoid hidden dependencies.

  - Thread Safety: When using static variables in a multi-threaded context, ensure proper synchronization 
  mechanisms like mutexes to avoid concurrency issues.

*/

#ifndef _STATIC_MEMBER_H_
#define _STATIC_MEMBER_H_

#include <cstdint>

class staticMember
{
  private:
    // Static members must be defined outside of the class
    // The staticAttribute is declared as private static inside 
    // the class, which means it can only be accessed through class 
    // functions or friends of the class, but it’s shared by all 
    // instances of MyClass.
    static uint16_t staticAttribute;
    

  public:
    staticMember();  // 1st constructor
    ~staticMember();
    void printStaticAttribute(void) const;
    void setStaticAttribute(uint16_t newAtt);
    uint16_t getStaticAttribute(void) const;

    /*
    Use Cases:
    - Utility functions that logically belong to the class but don't operate on instances.
    - Functions that work with static member variables (like counters or flags shared across all instances).
    - Factory methods that create and return instances of the class.
    */
    static void staticMemberFunction(void)
    {
      std::cout << "Hi, I am  = staticMemberFunction" << std::endl;
    }
};

#endif /* _STATIC_MEMBER_H_ */

/** @} */
/* End of file */