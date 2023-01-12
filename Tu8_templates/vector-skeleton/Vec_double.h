#ifndef __VEC_DOUBLE_H_
#define ___VEC_DOUBLE_H_
#include <algorithm>
#include <cstddef>
template<typename T>
class Vec
{
private:
  std::size_t _capacity{};
  std::size_t _size{};
  T* _arr = nullptr;

public:
  Vec() = default;

  Vec(std::size_t capacity, T initial_val);

  ~Vec() { delete[] _arr; }

  std::size_t capacity();

  std::size_t size();

  void push(const T& value);

  T& operator[](std::size_t index);

  T* begin();
  T* end();
};

#endif
