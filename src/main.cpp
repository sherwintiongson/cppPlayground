#include <iostream>
#include <windows.h>

#include "arrays_vectors_test.hpp"
#include "function_test.hpp"

using std::cout;
using std::endl;

int main() 
{
    //test_arrays_vectors();
    test_functions();
    
    // Delay to avoid overwhelming VSCode
    Sleep(300);

    // tell OS that programs runs and no error
    cout << endl << "End of app" << endl;

    return 0;
}