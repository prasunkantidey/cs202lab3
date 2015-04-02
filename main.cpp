#include <iostream>
#include "header.h"

using namespace std;

int main(){
	int first, second;
	cout << "Enter first: ";
	cin >> first;
	cout << "Enter second: ";
	cin >> second;
	
	cout << "Sum: " << add(first, second) << endl;
	return 0;
}
