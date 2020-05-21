// Self implementation of 
// the Vector Class in C++ 
  
#include <bits/stdc++.h> 
using namespace std; 
  
class vectorClass { 
  
    // arr is the integer pointer 
    // which stores the address of our vector 
    int* arr;

    int arr1[100];
  
    // capacity is the total storage 
    // capacity of the vector 
    int capacity; 
  
    // current is the number of elements 
    // currently present in the vector 
    int current; 
  
public: 
    // Default constructor to initialise 
    // an initial capacity of 1 element and 
    // allocating storage using dynamic allocation 
    vectorClass() 
    { 
        arr = new int[1]; 
        capacity = 1; 
        current = 0; 
    } 
  
  // TruongLVN
    template <typename... T> 
    vectorClass(T... bytes){
            current = sizeof...(bytes);
            capacity = current + 1;
            int temp[current] = {static_cast<int>(bytes)...};
            arr = new int[current];

            for(int i=0 ; i<current; i++) {
                arr[i] = temp[i];
            }
        }


    // TruongLVN
    void push(int data, int index) 
    { 
        if(index >= current)
            return;
        if(current == capacity) {
            int* temp = new int[2 * capacity];

            // copy old arr elements to new array and insert new data 
            for (int i=0; i <= capacity; i++) {
                if(i < index)
                    temp[i] = arr[i];
                else if (i == index)
                    temp[i] = data;
                else
                    temp[i] = arr[i-1];
            }

            cout << "davao day\n";
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

    // Function to add an element at the last 
    void push(int data) 
    { 
  
        // if the number of elements is equal to the capacity, 
        // that means we don't have space 
        // to accommodate more elements. 
        // We need to double the capacity 
        if (current == capacity) { 
            int* temp = new int[2 * capacity]; 
  
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
  
    void insert(int data, int index) {
        if(index > current) 
            return;

    }

  
    // function to extract element at any index 
    int get(int index) 
    { 
  
        // if index is within the range 
        if (index < current) 
            return arr[index]; 
    } 
  
    // function to delete last element 
    void pop() 
    { 
        current--; 
    } 
  
    // function to get size of the vector 
    int size() 
    { 
        return current; 
    } 
  
    // function to get capacity of the vector 
    int getcapacity() 
    { 
        return capacity; 
    } 
  
    // function to print array elements 
    void print() 
    { 
        for (int i = 0; i < current; i++) { 
            cout << arr[i] << " "; 
        } 
        cout << endl; 
    } 
}; 

void print() 
{ 

}

template <typename T, typename... Types> 
void print(T var1, Types... var2) 
{ 
    cout << var1 << endl ; 
  
    print(var2...) ; 
}

// Driver code 
int main() 
{ 
    vectorClass v; 
    v.push(10); 
    v.push(20); 
    v.push(30); 
    v.push(40); 
    v.push(50); 
  
    cout << "Vector size : "
         << v.size() << endl; 
    cout << "Vector capacity : "
         << v.getcapacity() << endl; 
  
    cout << "Vector elements : "; 
    v.print(); 


    // buffer<45> aa = {48,49,50,51,66,77,88};
    vectorClass aaa (1,3,4,5,56);
    aaa.push(50); 

    cout << "Vector elements aaa: "; 
    aaa.print();

    vectorClass bbb (5,6,4,5,6,7);
    cout << "Vector elements bbb: "; 
    bbb.print();
    cout << bbb.size() << endl;

    bbb.push(69, 2);
    bbb.push(9, 3);
    bbb.push(49, 3);
    bbb.push(59, 4);
    bbb.push(29, 5);

    cout << "Vector elements bbb: "; 
    bbb.print();
    cout << bbb.size() << endl;



   // cout << aa[2];
    
  
    return 0; 
} 