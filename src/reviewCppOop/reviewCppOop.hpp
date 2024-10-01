/**@file    reviewCppOop.hpp
 *
 * @brief   We will recall C++ OOP features
 *
 * @author  Sherwin Tiongson
 * @date    2024-09-10
 */
#ifndef _REVIEW_CPP_OOP_H_
#define _REVIEW_CPP_OOP_H_

#include <cstdint>
#include <string>

class ANIMAL
{
  public:
    uint16_t publicMember = 0;
    uint16_t testAccess = 0;
    ANIMAL();
    ANIMAL(std::string name,  uint16_t weigth);
    ~ANIMAL();
    std::string getName(void) const;
    void setName(std::string name);
    uint16_t getWeight(void) const;
    void setWeight(uint16_t weight);
    std::string makeNoise(void) const;

  protected:
    uint16_t protectedMember = 0;

  private:
    uint16_t privateMember = 0;
    std::string name;
    uint16_t weigth;
};

#endif /* _REVIEW_CPP_OOP_H_ */
/** @} */
/* End of file */