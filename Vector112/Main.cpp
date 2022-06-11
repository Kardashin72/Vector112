#include "Vector112.h"

void main()
{
	int arr[10] = { 1,2, 2, 1,2,6,2,14,8,9 };
	Vector112 v1(arr, 10);
	Vector112 v2(5,3);
	Vector112 v3(5, 2);
	cout << v1 << endl;
	v1.printMaxElem();
	cout << endl;
	v1.printMinElem();
	cout << endl;
	v1.clear();
	v1 = v2;
	cout << v1 << endl << v2;

	
}