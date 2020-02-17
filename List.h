//
// Created by Lenovo on 16.02.2020.
//

#ifndef UNTITLED6_LIST_H
#define UNTITLED6_LIST_H

#include "Stack.h"

#include <type_traits>

class List :public Stack{
private:
    int data;
    List *next;
public:
    List ();
    ~List ();
    bool push_back(int d);
    bool push_forward(int d);
    int pop_back();
    int pop_forward();
    void print();
};


#endif //UNTITLED6_LIST_H
