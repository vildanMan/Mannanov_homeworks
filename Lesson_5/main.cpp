#include <iostream>


// Для задания 1:
// Выводит массив в консоль
void printArr(double * arr, int SIZE){
	for(int i = 0; i < SIZE; i++){
		std::cout << i << "->" << arr[i] << std::endl;
	}
}

// Для задания 2:
// Заменяет значения массива на противоположные
int printReplace(int * arr, int SIZE){
	for(int i = 0; i < SIZE; i++){
		if(arr[i] == 1)
			std::cout << arr[i] << " - " << 0 << std::endl;
		else if(arr[i] == 0)
			std::cout << arr[i] << " - " << 1 << std::endl;
		else
			return 0;
	}
}

// Для задания 3:
// Заполняет массив заранее заданными значениями
void fillArray(int * arr, int SIZE){
	int staticArr[] = {1, 4, 7, 10, 13, 16, 19, 22};
	for(int i = 0; i < SIZE; i++){
		arr[i] = staticArr[i];
	}
}

int main(){
	
	// ================================================
	// Задание 1: =====================================
	// ================================================
	
	std::cout << "Task 1: \n" << std::endl;
	
	double array[5] = {4.34, 5.56, 1.43, 6.21, 3.76};
	int SIZE = sizeof(array) / 8;
	
	printArr(array, SIZE);
	
	std::cout << "\n" << std::endl;
	
	// ================================================
	// Задание 2: =====================================
	// ================================================
		
	std::cout << "Task 2: \n" << std::endl;
	
	int array2[] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
	int SIZE2 = sizeof(array2) / 4;
	
	printReplace(array2, SIZE2);
	
	std::cout << "\n" << std::endl;
	
	
	// ================================================
	// Задание 3: =====================================
	// ================================================
	
	std::cout << "Task 3: \n" << std::endl;
	
	int array3[8];
	int SIZE3 = sizeof(array3) / 4;
	
	fillArray(array3, SIZE3);
	
	for(int i = 0; i < SIZE3; i++){
		std::cout << i << " - " << array3[i] << std::endl; 
	}
	
	std::cout << "\n" << std::endl;
	
	system("pause");
	return 0;
}