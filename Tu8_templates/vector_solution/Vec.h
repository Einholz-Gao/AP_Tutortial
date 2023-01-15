#ifndef __VEC_H_
#define __VEC_H_
#include <algorithm>
#include <cstddef>

template <typename T>
class Vec
{
private:
  std::size_t _capacity{};
  std::size_t _size{};
  T *_arr = nullptr;

public:
  Vec() = default;

  Vec(std::size_t capacity, T initial_val)
      : _size(capacity), _arr(new T[capacity])
  {
    _capacity = capacity;
    // set initial value
    std::fill(_arr, _arr + _size, initial_val);
  }

  ~Vec()
  {
    delete[] _arr;
  }

  std::size_t capacity()
  {
    return _capacity;
  }

  std::size_t size()
  {
    return _size;
  }

  void push(const T &value)
  {
    // TODO 1: if size < capacity, add value directly.
    // Otherwise: size == capacity and we need to allocate
    // a new array, copy over elements and then add new value.
    if (_size < _capacity)
    {
      _arr[_size] = value;
      _size++;
    }
    else
    {

      T *temp = _arr;
      std::size_t new_capacity = _capacity != 0 ? _capacity * 2 : 1;

      // create new array and copy over old data
      _arr = new T[new_capacity];
      for (std::size_t i = 0; i < _size; i++)
      {
        _arr[i] = temp[i];
      }
      delete[] temp;
      _arr[_size] = value;
      _size++;
      _capacity = new_capacity;
    }
  }

  // TODO 2: Define operator [] for Vec that returns T& at index "i"
  T &operator[](std::size_t index)
  {
    return _arr[index];
  }

  // TODO 3: Allow ranged based for loops by defining
  // begin and end methods.
  // begin: returns a pointer to the first element
  // end:   return a pointer to one past the last element
  T *begin()
  {
    return _arr;
  }
  T *end()
  {
    return _arr + _size;
  }
};

#endif
