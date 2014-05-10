//LinkedListStack.cpp
#ifndef _LINKEDLISTSTACK_CPP
#define _LINKEDLISTSTACK_CPP


#include "LinkedListStack.hpp"
#include <cstdlib>
#include <cassert>
#include <iostream>


template <typename T>
LinkedListStack<T>::LinkedListStack()
{

 front = NULL;
 back = NULL;
  _size = 0;
}

template <typename T>
void LinkedListStack<T>::add(T elem)
{

    node* temp = new node;
    temp -> data = elem;
    temp -> next = back;
    back = temp;
      _size++;

}

template <typename T>
T LinkedListStack<T>::remove()
{
  assert(!this->is_empty());
  node* temp = new node;
  temp = back;
  _data = back->data;
  back = back->next;

  delete temp;
  _size--;
  return _data;
}

template <typename T>
T LinkedListStack<T>::get_next()
{
  assert(!this->is_empty());
  return back->data;
}

template <typename T>
int LinkedListStack<T>::size()
{
  return _size;
}

template <typename T>
LinkedListStack<T>::~LinkedListStack()
{
  while(!this->is_empty())
    this->remove();
}

#endif
