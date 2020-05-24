#ifndef MYVECTOR_H_
#define MYVECTOR_H_

template<typename type>
class MyVector {
public:
	// Constructor.
	MyVector();

	// Constructor.
	template <typename... T> 
	MyVector(T... bytes) {
	    current = sizeof...(bytes);
	    capacity = current + 1;
	    type temp[current] = {static_cast<type>(bytes)...};
	    arr = new type[current];

	    for(int i=0 ; i<current; i++)
	        arr[i] = temp[i];
	}

	// To access elements of vector.
    type& operator [] (int i);

    // Push data to tail of vector.
	void pushback(const type&);

	// Pop data to tail of vector.
	void popback();

	// Insert data at index.
	void insert(const type&, int index);

	// Delete data at index.
	void erase(int index);

	// Get size of vector.
	int size() const;

	// Get capacity of vector.
	int getcapacity() const;

	// Print all elements of vector.
	void print() const;

private:
	type* arr;
	int capacity;
	int current;
};

#endif // include guard