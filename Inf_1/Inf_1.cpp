﻿#include <iostream>

using namespace std;

int main() {
	int* arr = new int[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = i;
	}
	cout << "Massive:\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}