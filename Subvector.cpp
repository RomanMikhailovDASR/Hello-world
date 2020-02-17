//
// Created by Lenovo on 16.02.2020.
//

#include "Subvector.h"
#include <iostream>
using namespace std;
Subvector::Subvector() {{
        top = 0;
        capacity = 0;
        mas = nullptr;
    }};
Subvector::~Subvector() {
        top = 0;
        capacity = 0;
        delete mas;
    };
bool Subvector::push_forward(int d) {{
        if (mas == nullptr) {
// cout « "1";
            capacity++;
            top++;
            mas = new int[capacity + 1];
            mas[1] = d;
//cout « mas[1];
        } else {
            int *n= mas;
// for (int i = 1; i < top; i++)
// cout « n[i] « " ";
//cout « endl;
            mas = new int[++capacity];
            for (int i = 1; i <= top; i++)
            {
                mas[i + 1] = n[i];
// cout « mas[i+1];
            }
            top++;
            mas[1] = d;

        }
        return true;
    }};
int Subvector::pop_forward() {{
        if (mas == nullptr) {
            cout << "ERROR: vector is already empty";
        }
        else {
            int val = mas[1];
            int *n = mas;
            mas = new int[--capacity];
            if (top == 1) {
                top--;
            }
            else {
                int a = top;
                top--;
                for (int i = 1; i <= a; i++) {
                    mas[i] = n[i+1];
                }
//top--;
            }
            return val;
        }
    }};
bool Subvector::push_back(int d) {{
//cout«top«" "«capacity«endl;

        if (top == capacity) {
            if (mas != nullptr) {
                int *n = mas;
                capacity++;
                top++;
                mas = new int[capacity];
//cout « "TOP" « top « "TOP" «endl;
                for (int i = 0; i < top; i++)
                    mas[i] = n[i];
//top++;
                mas[top] = d;
            }
            else {
                capacity++;
                mas = new int [capacity];
                mas[++top] = d;
            }
        }
        else {
            top++;
            mas[top] = d;
        }
// cout « top « capacity « endl;
        return true;
    }};
int Subvector::pop_back() {{
        if (mas == nullptr) {
            cout << "ERROR: vector is already empty";
        }
        int d = mas[top];
        top--;
        return d;
    }};
void Subvector::print() {
        for (int i = 1; i <= top; i++) {
            cout << mas[i] << ' ';
        }
        cout << endl;
    };