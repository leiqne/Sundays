#ifndef LISTA_H
#define LISTA_H

#include <functional>
#include <conio.h>
#include <iostream>

using namespace std;
template <class T>
struct Nodo {
    T element;
    Nodo<T>* next;
    Nodo<T>* prev;
    Nodo(T c) { element = c; next = nullptr; prev = nullptr; }
};

template <class T>
class Lista
{
private:
    Nodo<T>* start;
    Nodo<T>* tail;
    size_t size;
public:
    Lista() {
        start = nullptr;
        tail = nullptr;
        size = 0;
    }
    void push_frontV1(T e) {//Sin depurar
        if (start == nullptr) {
            Nodo<T>* _new = new Nodo<T>(e);
            start = _new;
            ++size;
        }
        else if (start->next == nullptr) {
            Nodo<T>* _new = new Nodo<T>(e);
            _new->next = start;
            start = _new;
            ++size;
        }
        else {
            Nodo<T>* _new = new Nodo<T>(e);
            _new->next = start;
            start = _new;
            ++size;
        }
    }
    void push_front(T e) {
        Nodo<T>* _new = new Nodo<T>(e);
        if (start != nullptr) {
            _new->next = start;
        }
        start = _new;
        ++size;
    }
    void print() {
        Nodo<T>* tmp = start;
        while (tmp != nullptr) {
            cout << tmp->element << "->";
            tmp = tmp->next;
        }
        cout << "nullptr";
    }

};
#endif // DEBUG