#include "Lista.h"

template <class T>
void Lista<T>::push_front(T e) {
    Nodo<T>* _new = new Nodo<T>(e);
    if (start != nullptr) {
        _new->next = start;
    }
    start = _new;
    ++size;
}

template <class T>
void Lista<T>::push_frontV1(T e) {
    Nodo<T>* _new = new Nodo<T>(e);
    if (start != nullptr) {
        _new->next = start;
        start->prev = _new;
    }
    else {
        tail = _new;
    }
    start = _new;
    ++size;
}

template <class T>
void Lista<T>::print() {
    Nodo<T>* tmp = start;
    while (tmp != nullptr) {
        cout << tmp->element << "->";
        tmp = tmp->next;
    }
    cout << "nullptr";
}
