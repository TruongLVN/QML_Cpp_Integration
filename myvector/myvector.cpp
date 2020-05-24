#include "myvector.h"
#include <iostream>

template<class type>
MyVector<type>::MyVector() {
	arr = new type[1];
    capacity = 1; 
    current = 0; 
}

// template<typename type>
// template <typename... T> 
// MyVector<type>::MyVector(T... bytes) {
//     current = sizeof...(bytes);
//     capacity = current + 1;
//     int temp[current] = {static_cast<int>(bytes)...};
//     arr = new type[current];

//     for(int i=0 ; i<current; i++)
//         arr[i] = temp[i];
// }

template<typename type>
type& MyVector<type>::operator[] (int i) {
	return arr[i];
}

template<typename type>
void MyVector<type>::pushback(const type& data) {
    // if the number of elements is equal to the capacity, 
    // that means we don't have space 
    // to accommodate more elements. 
    // We need to double the capacity 
    if (current == capacity) { 
        type* temp = new type[2 * capacity]; 

        // copying old array elements to new array 
        for (int i = 0; i < capacity; i++) { 
            temp[i] = arr[i]; 
        } 

        // deleting previous array
        delete[] arr; 
        capacity *= 2; 
        arr = temp; 
    } 

    // Inserting data 
    arr[current] = data; 
    current++; 
}

template<typename type>
void MyVector<type>::popback() {
	current--;
}

template<typename type>
void MyVector<type>::insert(const type& data, int index) {
    if(index >= current)
        return;
    if(current == capacity) {
        type* temp = new type[2 * capacity];

        // copy old arr elements to new array and insert new data 
        for (int i=0; i <= capacity; i++) {
            if(i < index)
                temp[i] = arr[i];
            else if (i == index)
                temp[i] = data;
            else
                temp[i] = arr[i-1];
        }

        // deleting previous array
        delete[] arr; 
        capacity *= 2;
        arr = temp;
        current++;
        return;
    }
    
    for(int i = current; i > index; i--) {
        arr[i] = arr[i-1];
    }
    arr[index] = data;
    current++;
}

template<typename type>
void MyVector<type>::erase(int index) {
    if(index >= current)
        return;
    for(auto i = index; i<current-1; i++) {
        arr[i] = arr[i+1];
    }
    current--;	
}

template<typename type>
int MyVector<type>::size() const {
	return current;
}

template<typename type>
int MyVector<type>::getcapacity() const {
	return capacity;
}

template<typename type>
void MyVector<type>::print() const {
    for (int i = 0; i < current; i++) { 
        std::cout << arr[i] << " "; 
    } 
    std::cout << std::endl; 
}

template class MyVector<int>;
template class MyVector<float>;
template class MyVector<char>;
// template MyVector<int>::MyVector(int bytes);