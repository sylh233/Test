#include <iostream>

#include "mathf.h"

int main()
{   
    using namespace std;
    mathf test = mathf(8,2);
    test.print();
    cout << endl << test.value();
    return 0;
}