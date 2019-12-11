#include "stdio.h"
#include <iostream>
#include "windows.h"
#include <ctime>

using namespace std;

int main() {

	cout << "RAND_MAX = 5\n";
	// Вывод максимального числа

	srand(time(0));
	// Автоматическая рандомизация

	cout << "1-random number = " << 1 + rand() % 5 << endl; 
	cout << "2-random number = " << 1 + rand() % 5 << endl; 
	cout << "3-random number = " << 1 + rand() % 5 << endl; 
	cout << "4-random number = " << 1 + rand() % 5 << endl; 
	cout << "5-random number = " << 1 + rand() % 5 << endl; 
	cout << "6-random number = " << 1 + rand() % 5 << endl; 
	cout << "7-random number = " << 1 + rand() % 5 << endl; 
	// 1-7 запуск генератора

	system("pause");
	return 0;
}