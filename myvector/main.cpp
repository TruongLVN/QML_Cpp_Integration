#include <iostream>
#include "myvector.h"

using namespace std;

int main() {

	MyVector<float> v;
	v.pushback(10); 
    v.pushback(20); 
    v.pushback(30); 
    v.pushback(40); 
    v.pushback(50);
    v.popback();
    v.insert(15, 3);
    v.insert(12, 0);
    v.insert(14, 2);
    v.insert(13, 5);
    v.erase(2);
    v.erase(0);
    v.erase(6);
    v[2] = 5;
    v[0] = 6;

    cout<< "size v = " << v.size() << endl;
    cout<< "capacity v = " << v.getcapacity() << endl;

    v.print();

    MyVector<int> v1 = {45, 56, 57, 58};
	v1.pushback(10); 
    v1.pushback(20); 
    v1.pushback(30); 
    v1.popback();
    v1.insert(15, 3);
    v1.insert(12, 0);
    v1.insert(14, 2);
    v1.insert(13, 5);
    v1.erase(2);
    v1.erase(0);
    v1.erase(6);
    v1[2] = 5;
    v1[0] = 6;

    cout<< "size v1 = " << v1.size() << endl;
    cout<< "capacity v1 = " << v1.getcapacity() << endl;

    v1.print();

	return 0;
}