#pragma once
#include <iostream>

template <class T>
class MiVector {
private:
    T* m_elementos;
    int m_tamano, m_capacidad;
public:
    MiVector() : m_elementos(nullptr), m_tamano(0), m_capacidad(0) {};
    ~MiVector() { delete[] m_elementos; }
    void push_back(const T&);
    void remove(const T&);
    void remove_if(const T&, bool (*f)(T&, T&));
    int size() const { return m_tamano; }

    T& operator[](int indice) {
        if (indice < 0 || indice >= m_tamano) throw std::out_of_range("Índice fuera de los límites del vector");
        return m_elementos[indice];
    }

    const T& operator[](int indice) const {
        if (indice < 0 || indice >= m_tamano) throw std::out_of_range("Índice fuera de los límites del vector");
        return m_elementos[indice];
    }

    void order(function<bool(MiVector, MiVector)>q) {                          //COMPLEJIDAD ALGORITMICA DEL METODO
                                                                                                                                                            //O(N^2) PORQUE HAY 2 FOR ANIDADOS
        bool ordenado; 
        for (int i = 0; i < m_elementos.size() - 1; i++) {
            ordenado = true;
            for (int j = 0; j < m_elementos.size() - 1; j++) {
                if (q(m_elementos[j], m_elementos[j + 1]))
                {
                    auto aux = m_elementos[j];
                    m_elementos[j] = m_elementos[j + 1];
                    m_elementos[j + 1] = aux;
                    ordenado = false;
                }
            }
            if (ordenado) break;
        }
    }

    class Iterator {
    private:
        T* m_elemento; // puntero al elemento actual
    public:
        using value_type = T;
        using reference = T&;
        using pointer = T*;
        using difference_type = std::ptrdiff_t;

        Iterator() : m_elemento(nullptr) {}

        Iterator(T* elemento) : m_elemento(elemento) {}

        // Operador de dereferenciación
        reference operator*() const {
            return *m_elemento;
        }

        // Operador de acceso a miembro
        pointer operator->() const {
            return m_elemento;
        }

        // Operador de incremento prefijo
        Iterator& operator++() {
            ++m_elemento;
            return *this;
        }

        // Operador de incremento sufijo
        Iterator operator++(int) {
            Iterator temp = *this;
            ++(*this);
            return temp;
        }

        // Operador de decremento prefijo
        Iterator& operator--() {
            --m_elemento;
            return *this;
        }

        // Operador de decremento sufijo
        Iterator operator--(int) {
            Iterator temp = *this;
            --(*this);
            return temp;
        }

        // Operador de suma
        Iterator operator+(difference_type n) const {
            return Iterator(m_elemento + n);
        }

        // Operador de resta
        Iterator operator-(difference_type n) const {
            return Iterator(m_elemento - n);
        }

        // Operador de igualdad
        bool operator==(const Iterator& otro) const {
            return m_elemento == otro.m_elemento;
        }

        // Operador de desigualdad
        bool operator!=(const Iterator& otro) const {
            return !(*this == otro);
        }
    };

    Iterator find(const T&);
    Iterator find(T&, bool (*f)(T&, T&));

    Iterator begin() { return Iterator(m_elementos); }
    Iterator end() { return Iterator(m_elementos + m_tamano); }
};

template<class T>
void MiVector<T>::push_back(const T& elemento) {
    if (m_tamano >= m_capacidad) {
        int nueva_capacidad = (m_capacidad == 0) ? 1 : m_capacidad * 2;
        T* nuevos_elementos = new T[nueva_capacidad];

        for (int i = 0; i < m_tamano; i++)
            nuevos_elementos[i] = m_elementos[i];

        delete[] m_elementos;

        m_elementos = nuevos_elementos;
        m_capacidad = nueva_capacidad;
    }

    m_elementos[m_tamano++] = elemento;
}

template <class T>
void MiVector<T>::remove(const T& elemento) {
    if (m_tamano == 0) return;

    T* nuevos_elementos = new T[--m_tamano];

    for (int i = 0; i < m_tamano; i++) {
        if (m_elementos[i] == elemento) continue;
        nuevos_elementos[i] = m_elementos[i];
    }

    delete[] m_elementos;

    m_elementos = nuevos_elementos;
}

template <class T>
void MiVector<T>::remove_if(const T& elemento, bool (*comparador)(T&, T&)) {
    if (m_tamano == 0) return;

    T* nuevos_elementos = new T[--m_tamano];

    for (int i = 0; i < m_tamano; i++) {
        if (comparador(m_elementos[i], elemento)) continue;
        nuevos_elementos[i] = m_elementos[i];
    }

    delete[] m_elementos;

    m_elementos = nuevos_elementos;
}



template <typename T>
typename MiVector<T>::Iterator 
MiVector<T>::find(const T& elemento) {
    for (auto it = begin(); it != end(); ++it) {
        if (*it == elemento) {
            return it;  // se encontró el elemento, devolver el iterador correspondiente
        }
    }
    return end();  // no se encontró el elemento, devolver el iterador "end"
}

template<typename T>
typename MiVector<T>::Iterator 
MiVector<T>::find(T& valorBuscado, bool (*comparador)(T&, T&)) {
    for (Iterator it = begin(); it != end(); ++it) {
        if (comparador(*it, valorBuscado)) {
            return it;
        }
    }
    return end();
}