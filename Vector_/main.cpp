#include "vector_.h"
#include <iostream>
using namespace std;

void main() {
	vector_ v(10, 7);
	//cin >> v;
	cout << v;
	cout << endl;
	v.insert(5, 5);
	cout << v;
	cout << endl;
	v.erase(1);
	cout << v<<endl;
	cin >> v;
	cout << v << endl;

	vector_ v1;
	v1.creatVector();
	cout << v1<<endl;

	system("pause");
}