#ifndef BOX_HPP
#define BOX_HPP
#include <iostream>

template <class T>
class Box {
    private:
        T data;

    public:
        Box(T data) : data(data) {
        }

        T getData() const {
            return data;
        }        
};

// specialization for class box that can store a pointer and returns it's dereferenced value
template <class T>
class Box<T*>
{
    private:
        T* data;

    public:
        Box(T* data) : data(data) {
        }

        T getData() const {
            return *data;
        }
}; 

#endif