//
// Created by Lenovo on 16.02.2020.
//

#include "List.h"
#include <iostream>
using namespace std;
List::List() {{
        data = 0;
        next = NULL;
    }};
List::~List() {
        List *a = next;
        List *b;
        while (a != nullptr) {
            b = a->next;
            delete a;
            a = b;
        }
    };
int List::pop_back() {{
        int val;
        List *a = next;
        if (next -> next == NULL) {
            val = next -> data;
            next = NULL;
            return val;
        }
        else {
            while (a -> next -> next != NULL) {
                a = a->next;
            }
            val = a -> next -> data;
            a -> next = NULL;
            return val;
        }
    }};
bool List::push_back(int d) {{
        List *a;
        a = next;
        if (next == NULL) {
            next = new List;
            next -> next = NULL;
            next -> data = d;
        }
        else {
            while (a -> next != NULL) {
                a = a -> next;
            }
            a -> next = new List;
            a = a -> next;
            a -> next = NULL;
            a -> data = d;
        }
        return true;
    }};
int List::pop_forward() {{
        int val;
        if (next == NULL) {
            cout << "ERROR: list is empty";
            return 0;
        }
        else {
            next = next -> next;
            val = next -> data;
            return val;
        }
    }};
bool List::push_forward(int d) {{
        List *a = next;
        next = new List;
        next -> next = a;
        next -> data = d;
        return true;
    }};
void List::print() {{
        List *a;
        a = next;
        while (a != NULL) {
            cout << a -> data << ' ';
            a = a -> next;
        }
        cout << endl;
    }};

