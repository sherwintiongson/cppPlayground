#include <windows.h>
#include <iostream>
#include "arrays_vectors_test.hpp"
#include "function_test.hpp"
#include "house_test.hpp"
#include "exceptionClass_test.hpp"
#include "reviewCppOopTest.hpp"
#include "static_member_test.hpp"
#include "enum_class.hpp"
#include "templates.hpp"
#include "smartPointers_test.hpp"

int main() 
{
    //test_arrays_vectors();
    //test_functions();
    //test_house();
    //test_exceptionClass();
    //test_reviewCppOop();
    //test_static_member();
    //enumClass::testEnumClass();
    //test_templateFunctions();
    smartPointers_test();


    // Delay to avoid overwhelming VSCode
    Sleep(300);

    // tell OS that programs runs and no error
    std::cout << std::endl << "End of app" << std::endl;

    return 0;
}

