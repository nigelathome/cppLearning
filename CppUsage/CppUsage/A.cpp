//
//  A.cpp
//  CppUsage
//
//  Created by Nigel Lee on 08/12/2016.
//  Copyright © 2016 Apress. All rights reserved.
//

#include "A.hpp"
class A {
public:
    A():i(17) {}
    virtual void f() { std::cout<< "A::f()" << i << endl; }
//    void f() { std::cout<< "A::f()" << i << endl; }
    int i;
};
