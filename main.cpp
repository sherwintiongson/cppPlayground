#include <iostream>
#include <windows.h>

#include "arrays_vectors_test.hpp"

int main() 
{
    test_arrays_vectors();

    // Delay to avoid overwhelming VSCode
    Sleep(300);

    // tell OS that programs runs and no error
    return 0;
}