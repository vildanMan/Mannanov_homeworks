#include <iostream>

/*=======================================================*/
// Задание 1

int var1 = 10;
short int var2 = 20;
long long var3 = 3000000;
char var4 = 'V';
bool var5 = true;
float var6 = 0.56f;
double var7 = 89347783434766.3434;

/*=======================================================*/
// Задание 2

enum TicTac_chars {
	CROSS, // Крестик
	TOE, // Нолик
	EMPTY // Пустая ячейка
};


/* TicTac_chars board[9]; // Поле 3х3

board[0] = CROSS;
board[2] = TOE;
board[3] = CROSS; */

/*=======================================================*/
// Задание 4*

// Not time (((

int main(){
	
	/*=======================================================*/
	// Задание 3
	
	// Здесь я столкнулся с проблемой: инициализация массива вне main() не удавалась
	// ...или заполнение значениями
	// Поэтому перевел в main() и заработало
	
	TicTac_chars board[9]; // Поле 3х3

	board[0] = CROSS;
	board[2] = TOE;
	board[3] = CROSS;
	
	
	
	system("pause");
	return 0;
	
}