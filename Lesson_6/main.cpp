#include <iostream>
#include <cmath> // Для ф-ии pow()
#include <stdlib.h> // Для функции srand()
#include <time.h> // Для функции time()
#include <fstream> // Для работы с файлами
#include <string> // Для работы со строками

using namespace std;

const int SIZE_t2 = 4; // Для задания 2, чтобы в функции не передавать размер матрицы


// Для задания 1:
// Заполняет матртицу 
void getArray(int n, int * ptr){
	
	for(int i = 0; i < n; i++){
		
		ptr[i] = pow(2, i);
		
	}
	
}

// Для задания 2
// Инициализирует матрицу
// Но она не работает, поэтому инициализацию вывожу в main()
void initArray_4x4(int** ptr){
	
	ptr = new int * [SIZE_t2];
	
	for(int i = 0; i < SIZE_t2; i++){
		
		ptr[i] = new int [SIZE_t2];
		
	}
	
}

// Для задания 2
// Заполнение массива случайными числами
void fillArr_4x4(int** ptr){
	
	srand(time(NULL));
	
	for(int i = 0; i < SIZE_t2; i++){
		
		for(int j = 0; j < SIZE_t2; j++){
			
			ptr[i][j] = rand() % 10;
			
		}
		
	}
}

// Для задания 2
// Выводит матрицу в консоль
void printArr(int** ptr){
	
	for(int i = 0; i < SIZE_t2; i++){
		
		for(int j = 0; j < SIZE_t2; j++){
			
			std::cout << ptr[i][j] << ", ";
			
		}
		
		std::cout << "\n";
		
	}
	
}


// Для задания 3
// Получение рандомной строки
string getRandString(){
	
	srand(time(NULL));
	
	string str;
	
	const int MIN = 50;
	const int MAX = 100;
	
	const int LENGTH = rand() % (MAX - MIN) + MIN ;
	
	for(int i = 0; i < LENGTH; i++){
		str += to_string(rand() % 9);
	}
	
	return str;
	
}

int main(){
	
	srand(time(NULL));
	
	// ================================================
	// Задание 1: =====================================
	// ================================================
	
	std::cout << "Task 1: ============================= \n";
	
	// unsigned int n; // Почему не получается? Если пользователь
	// введет отрицательое число, то прога крашится и до условия не дойдёт?
	int n;
	
	label_1:
	
	std::cout << "Enter the array size: ";
	std::cin >> n;
	
	if(n > 0){
		
		int * ptrArr = new (std::nothrow) int[n];
		
		if(ptrArr != nullptr){
			
			// В связи с тем, что в задании тип данных массива integer,
			// то необходимо проверить, чтобы значение массива не превышало
			// максимальное значение данного типа:
			
			if(pow(2, n) <= pow(2, sizeof(int)*8) / 2){
				
				getArray(n, ptrArr);
				
				for(int i = 0; i < n; i++){
					
					std::cout << "[" << i << "] -> " << ptrArr[i] << std::endl;
					
				}
				
			} else { // Значение превышает предел типа данных
				
				std::cout << "Very big f*king value in array!" << std::endl;
				goto label_1;
				
			}
			
		} else { // Указатель не заполнился
			
			std::cout << "Error! Can not allocate memory!" << std::endl;
			
		}
		
		delete[] ptrArr;
		ptrArr = nullptr;
		
	} else { // Пользователь ввёл отрицательное число
		
		std::cout << "Please enter positive number!" << std::endl;
		goto label_1;
		
	}
	
	// ================================================
	// Задание 2: =====================================
	// ================================================
	
	std::cout << "Task 2: ============================= \n";
	
	int** ptrArr_4x4 = nullptr;
	
	// Вопрос: почему нельзя
	// вывести в функцию, где аргументом является указатель?
	// И в теле функции инициализировать матрицу:
	
	// initArray_4x4(ptrArr_4x4);
	
	ptrArr_4x4 = new int * [SIZE_t2];
	
	for(int i = 0; i < SIZE_t2; i++){
		
		ptrArr_4x4[i] = new int [SIZE_t2];
		
	}
		
	fillArr_4x4(ptrArr_4x4);
	
	printArr(ptrArr_4x4); 
	
	
	// ================================================
	// Задание 3: =====================================
	// ================================================
	
	std::cout << "Task 3: ============================= \n";
	
	string fileName1, fileName2;
	
	std::cout << "Enter name of file 1: ";
	std::cin >> fileName1;
	ofstream file1(fileName1 + ".txt"); // .txt добавляем, потому что согласно заданию должен быть txt
	file1 << getRandString();
	
	// Задержка по времени...Ну чтобы время вызова getRandString() менялось
	
	std::cout << "Enter name of file 2: ";
	std::cin >> fileName2;
	ofstream file2(fileName2 + ".txt");
	file2 << getRandString();
	
	file1.close();
	file2.close(); 
	
		
	system("pause");
	return 0;
}