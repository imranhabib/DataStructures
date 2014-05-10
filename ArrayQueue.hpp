//ArrayQueue.hpp
#ifndef _ARRAYQUEUE_HPP
#define _ARRAYQUEUE_HPP

#include "TodoList.hpp"

template <typename T>
class ArrayQueue: public TodoList<T>
{
 public:
  ArrayQueue(); // constructor

  void add(T elem);
  T remove();
  T get_next();
  int size();

  ~ArrayQueue(); // destructor

  static const int INIT_SIZE = 10;

 //private:

  T * array;
    int capacity;
    int front;
    int back;
    int total;
    T var;

};

#include "ArrayQueue.cpp"

#endif
