#include <iostream>

int main(){
	
	// ================================================
	// Задание 1: =====================================
	// ================================================
	
	std::cout << "Task 1:" << std::endl;
	
	int num, num2;
	
	std::cout << "Enter your first number: ";
	std::cin >> num;
	std::cout << "Enter your second number: ";
	std::cin >> num2;
	
	int sum = num + num2;
	
	if(sum >= 10 && sum <= 20){
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}
	
	std::cout << "\n";
	
	// ================================================
	// Задание 2: =====================================
	// ================================================
	
	std::cout << "Task 2:" << std::endl;
	
	const int A = 10, B = 8;
	
	if(A == 10 && B == 10 && A + B == 10){
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}
	
	std::cout << "\n";
	
	// ================================================
	// Задание 3: =====================================
	// ================================================
	
	std::cout << "Task 3:" << std::endl;
	
	for(int i = 1; i <= 50; i += 2){
		std::cout << i << ", ";
	}
	
	std::cout << "\n";
	
	// ================================================
	// Задание 4*: ====================================
	// ================================================
	
	std::cout << "Task 4*:" << std::endl;
		
	unsigned long long some_number; // Потому что простое число > 0
	bool is_simple;
	
	std::cout << "Enter your some positive number: ";
	std::cin >> some_number;
	
	if(some_number == 1){
		is_simple = true;
	} else {
		for(int i = 2; i < some_number; i++){
			std::cout << i << std::endl;
			if(some_number % i == 0){
				is_simple = false;
				break;
			}
			is_simple = true;
		}
	}
	
	if(is_simple) 
		std::cout << "Your number is simple!" << std::endl;
	else 
		std::cout << "Your number isn't simple!" << std::endl;
		
	std::cout << "\n"; 
	
	// ================================================
	// Задание 5**: ===================================
	// ================================================
	
	std::cout << "Task 5**:" << std::endl;
	
	unsigned int year;
	int MAX_Y = 3000;
	int MIN_Y = 1;
	bool is_leap = false; // Сначала введенный код в любом случае не високосный
	
	label_1:
	
	std::cout << "Enter year: ";
	std::cin >> year;
	
	if(MIN_Y >= 1 && year <= MAX_Y){ // Попал ли пользователь в диапазон
		
		// Далее выполняются проверки на все условия определения високосного года
		if(year % 4 == 0)
			is_leap = true;
		if(year % 100 == 0)
			is_leap = false;
		if(year % 400 == 0) 
			is_leap = true;
		
		// Вывод результата
		if(is_leap)
			std::cout << "This is a leap year." << std::endl; // Високосный
		else
			std::cout << "This isn't a leap year." << std::endl; // Не високосный
	
	} else { // Если пользователь не попал в диапазон
		std::cout << "Please enter year " << MIN_Y << "..." << MAX_Y << std::endl;
		goto label_1; // Возвращаем его в начало 
	}
	
	std::cout << "\n";
	
	system("pause");
	return 0;
}