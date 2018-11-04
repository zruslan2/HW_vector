#pragma once
//#include <vector>
#include <iostream>
using namespace std;
class vector_
{
	int* arr;
	int size;
public:
	vector_();
	~vector_();
	vector_(const vector_&v);
	vector_(int size, int element = 0);
	bool empty() const;
	int getSize() const;
	void clear();
	void push_back(int number);
	void pop_back();
	void erase(int index);
	int& operator[](int index) const;
	//home work
	void insert(int index, int number);	
	void creatVector();
	//___________
};
ostream &operator<<(ostream &os, const vector_ & v);
//home work
istream& operator >> (istream&is, vector_& v);