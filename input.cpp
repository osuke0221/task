#include <iostream>
#include <cstdlib>
#include <ctime>

int RandNum() {
	srand((unsigned)time(NULL));
	return rand() % 10; //0から９までの整数
}

int UserInput() {
	int num;
	std::cout << "数字を入力してください　(0から9)  ";
	std::cin >> num;
	return num;
}