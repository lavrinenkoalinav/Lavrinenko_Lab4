#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 12;
	int arr[size];
	bool unique;

	cout << "Введіть 12 чисел:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		unique = true;
		for (int j = 0;j < size; j++) {
			if (i!= j && arr[i] == arr[j]) {
				unique = false;
				break;
			}
		}
		if (unique) {
			cout << "Унікальне число:" << "" << arr[i] << endl;
		}
	}
	return 0;
}
