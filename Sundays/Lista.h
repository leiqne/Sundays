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
        }
        ++size;
    }
    void push_front(T e) {
        Nodo<T>* _new = new Nodo<T>(e);
        if (start != nullptr) {
            _new->next = start;
        }
        start = _new;
        ++size;
    }

    void bubbleSort_V2(std::function<bool(T*, T*)> operador) {                 //COMPLEJIDAD ALGORITMICA DEL METODO
                                        //cambie el el Nodo* por- T*                                                                                                          //O(N^2) 
        bool intercambiado;                                                                                    //PORQUE HAY 2 FOR ANIDADOS
        do { 
            Nodo<T>* ptr1 = new Nodo<T>(e);
            ptr1 = start;
            intercambiado = false;
            while (ptr1->next != nullptr) {
                if (operador(ptr1, ptr1->next)) {
                    auto aux = ptr1->elemento; 
                     ptr1->elemento = ptr1->next->elemento; 
                     ptr1->next->elemento = aux; 
                    intercambiado = true;
                }
                ptr1 = ptr1->next;
            }
        } while (intercambiado);
    }

    void print() {
        Nodo<T>* tmp = start;
        while (tmp != nullptr) {
            cout << tmp->element << "->";
            tmp = tmp->next;
        }
        cout << "nullptr";
    }

    void push_back(T e) {
        Nodo<T>* _new = new Nodo<T>(e);
        if (tail != nullptr) {
            tail->next = _new;
            _new->back = tail;
        }
        else start = _new;
        
        tail = _new;
        ++size;
    }

};
#endif // DEBUG