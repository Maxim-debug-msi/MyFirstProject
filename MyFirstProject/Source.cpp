#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int arr[]{ 4,6,8,1 };

	cout << sizeof(arr) << endl;

	
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout <<arr[i]<<endl;
	}
	
	system("pause");
}