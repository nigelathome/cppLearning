//
//  main.cpp
//  CppUsage
//
//  Created by Nigel Lee on 08/12/2016.
//  Copyright © 2016 Apress. All rights reserved.
//

#include <iostream>
#include "A.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    A a, b;
    a.f();
    cout << "sizeof(a)=" << sizeof(a) << endl;
    
    int *p = (int*)&a;
    int *q = (int*)&b;
//    int *p = NULL;
    cout << "sizeof(p)=" << sizeof(p) << endl;
//    p++;
//    p++;
    cout << "p=" << p << endl;
    cout << "q=" << q << endl;
    
    int *x = (int*)*p;
    int *y = (int*)*q;
    
    // p n q r both pointing the same vtable
    cout << "*p=" << *p << endl;
    cout << "*q=" << *q << endl;
    
    cout << "*x=" << x << endl;
    cout << "*y=" << y << endl;

    
    return 0;
}
