//Никифоров Павел П13121
#include <iostream>
using namespace std;
int main() {
	/*
	* Boolean1. Дано целое число A. Проверить истинность высказывания: «Число A является положительным».
	*/
	int a;
	bool res;
	cin >> a;
	res = a > 0;
	cout << boolalpha<< res << endl;
	return 0;
}