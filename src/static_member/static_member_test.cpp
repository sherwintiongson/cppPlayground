#include <iostream>
#include "static_member.hpp"
#include "static_member_test.hpp"

void test_static_member(void)
{
  staticMember obj1;
  staticMember obj2;

  // print default value
  std::cout << "staticAttribute = " << obj1.getStaticAttribute() << std::endl;
  std::cout << "staticAttribute = " << obj2.getStaticAttribute() << std::endl;

  // update static member via obj1 and check if it will change the other object 
  obj1.setStaticAttribute(789);
  std::cout << "staticAttribute = " << obj1.getStaticAttribute() << std::endl;
  std::cout << "staticAttribute = " << obj2.getStaticAttribute() << std::endl;

  // update static member via obj1 and check if it will change the other object 
  obj2.setStaticAttribute(100);
  std::cout << "staticAttribute = " << obj1.getStaticAttribute() << std::endl;
  std::cout << "staticAttribute = " << obj2.getStaticAttribute() << std::endl;


  staticMember::staticMemberFunction();
}