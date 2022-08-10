#include<iostream>
#include<typeinfo>
using namespace std;

int main() {

	string value;

	decltype(value) name = "Yek";

	cout << typeid(value).name() << endl << name << endl;

	return 0;
}