#include <iostream>

#include "mathf.h"

int main()
{   
    using namespace std;
    mathf test(1,2,2);
    test.print();
    double d = test.value();
    cout << d;
    return 0;
}