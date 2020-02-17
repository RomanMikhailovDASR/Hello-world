//
// Created by Lenovo on 16.02.2020.
//

#ifndef UNTITLED6_STACK_H
#define UNTITLED6_STACK_H


class Stack {
protected:
public:
    virtual bool push_back(int d) = 0;
    virtual bool push_forward(int d) = 0;
    virtual int pop_back() = 0;
    virtual int pop_forward() = 0;
    virtual void print() = 0;
};


#endif //UNTITLED6_STACK_H
