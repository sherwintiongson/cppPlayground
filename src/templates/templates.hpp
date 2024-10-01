/**@file    templates.hpp
 *
 * @brief   Study the basic usage of templates
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-08
 */

/*
Summary:
 - Template Functions allow you to create generic functions that work with any data type.
 - Use template <typename T> (or class T) to define template parameters.
 - The compiler generates specific versions of the function for the types used during function calls.
 - Multiple template parameters can be used if the function requires more than one generic type.
 - Specialization allows you to define custom behavior for specific types.
 - Default parameters can be used in template functions to make them more flexible.
*/

#ifndef _MY_TEMPLATES_H_
#define _MY_TEMPLATES_H_

void test_templateFunctions();

// Two arguments template function but both arguments
// must be of the same types
template <typename T>
T addValue(T first, T second)
{
  return (first + second);
}

// Two arguments template function but both arguments can be of different types
template <typename T1, typename T2>
auto subtractValue(T1 first, T2 second)
{
  return (first - second);
}

// Three arguments template function, all arguments can be of different types
template <typename T1, typename T2, typename T3>
auto multiplyValues(T1 first, T2 second, T3 third)
{
  return (first * second * third);
}

#endif /* _MY_TEMPLATES_H_ */

/** @} */
/* End of file */