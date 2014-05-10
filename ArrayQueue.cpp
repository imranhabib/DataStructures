#ifndef _ARRAYQUEUE_CPP
#define _ARRAYQUEUE_CPP

//ArrayQueue.cpp

#include "ArrayQueue.hpp"
#include <cstdlib>
#include <cassert>
#include <iostream>

using namespace std;

template <typename T>
ArrayQueue<T>::ArrayQueue() : front(0)
{

    capacity = INIT_SIZE;
    array = new T[INIT_SIZE];
    front = 0;
    back = 0;
    total = 0;
    var = NULL;
}

template <typename T>
void ArrayQueue<T>::add(T elem)
{
    array[back] = elem;
    back++;
    total++;
}

template <typename T>
T ArrayQueue<T>::remove()
{
    assert(!this->is_empty());
    var = array[front];
    front++;
    total--;
    return var;
}

template <typename T>
T ArrayQueue<T>::get_next()
{
    assert(!this->is_empty());
    return array[front];}

template <typename T>
int ArrayQueue<T>::size()
{
    return total;
}


template <typename T>
ArrayQueue<T>::~ArrayQueue()
{

 delete [] array;

}

#endif
