#include "Vec_double.h"

template<typename T>
Vec<T>::Vec(std::size_t capacity, T initial_val)
  : _capacity(capacity)
  , _size(capacity)
  , _arr(new T[capacity])
{
  // set initial value
  std::fill(_arr, _arr + _size, initial_val);
}
template<typename T>
std::size_t Vec<T>::capacity()
{
  return _capacity;
}
template<typename T>
std::size_t Vec<T>::size()
{
  return _size;
}
template<typename T>
void Vec<T>::push(const T& value)
{
  // TODO 2: if _size < _capacity, add value directly.
  if(_size<_capacity){
    //std::fill(_arr, _arr + _size, value);
    _arr[_size]=value;
    _size++;
  }
  else
  {
   T *temp = _arr;
   std::size_t new_capacity = _capacity != 0 ? _capacity* 2 :1;
   _arr = new T[new_capacity];
   for(std::size_t i = 0;i<_size;i++){
     _arr[i]=temp[i];
  }
  delete[] temp;
  _arr[_size] = value;
  _size++;
  _capacity = new_capacity;
  }

  // Otherwise: size == capacity means there's no space for 
  // new elements and we need to allocate
  // a new array, copy over elements from the old one
  //  and then add the new value.
}

// TODO 3: Define operator [] for Vec that returns double& at "index"
template<typename T>
T& Vec<T>::operator[](std::size_t index)
{
  return _arr[index];
}

// TODO 4: Allow ranged based for loops by defining
// begin and end methods.
// begin: returns a pointer to the first element
// end:   return a pointer to one past the last element
template<typename T>
T* Vec<T>::begin()
{
    // Implementation here
  return _arr[0];
}
template<typename T>
T* Vec<T>::end()
{
    // Implementation here
  return _arr[_size];
}
