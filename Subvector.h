//
// Created by Lenovo on 16.02.2020.
//

#ifndef UNTITLED6_SUBVECTOR_H
#define UNTITLED6_SUBVECTOR_H

#include "Stack.h"

#include <type_traits>

class Subvector: public Stack {
private:
    unsigned int top;
    unsigned int capacity;
    int *mas;
public:
    Subvector();
    ~Subvector();
    bool push_back(int d);
    bool push_forward(int d);
    int pop_back();
    int pop_forward();
    void print();
};


#endif //UNTITLED6_SUBVECTOR_H
