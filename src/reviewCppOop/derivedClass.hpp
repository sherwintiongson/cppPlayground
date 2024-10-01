/**@file    derivedClass.hpp
 *
 * @brief   We will recall C++ OOP features derived class
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-10
 */
#ifndef _DERIVED_CLASS_H_
#define _DERIVED_CLASS_H_

#include <cstdint>
#include <string>
#include "reviewCppOop.hpp"

class Dog : public ANIMAL
{
  private:
    std::string breed;

  public:
    Dog(std::string name,  uint16_t weigth, std::string breed);
    ~Dog();
    std::string getBreed(void) const;
    void digHole(void);
    std::string makeNoise(void) const;
};

#endif /* _DERIVED_CLASS_H_ */
/** @} */
/* End of file */