//LinkedListStack.hpp
#ifndef _LINKEDLISTSTACK_HPP
#define _LINKEDLISTSTACK_HPP
#include "TodoList.hpp"

template <typename T>
class LinkedListStack: public TodoList<T>
{
 public:
  LinkedListStack();
  void add(T elem);
  T remove();
  T get_next();
  int size();
  virtual ~LinkedListStack();

 private:
  struct node{
    node* next;
    T data;

  };
 T _data;
 node* front;
 node* back;
  int _size;
};

#include "LinkedListStack.cpp"

#endif
