#include <iostream>
inline double mean(double num1, double num2, double num3);
int max_V(int num1, int num2, int num3);
short max_V(short num1, short num2, short num3);
double max_V(double num1, double num2, double num3);
template <typename T>
T Min_Arr_Val(T arr[], const int lenght);
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, h;
	//Задача 1
	//	Создайте встраиваемую функцию, которая принимает  
	//	три числа и возвращает их среднее	арифметическое.
	
	std::cout << "Задача 1.\nВведите 3 числа: ";
	std::cin >> n >> m >> h;
	std::cout << "Среднее арифмитическое этих чисел = "<<mean(n,m,h) << "\n\n";
	
	//Задача 2
	//	Создайте перегруженную функцию для нахождения максимального из трёх элементов.Функция должна
	//	поддерживать типы int, short и double.Также функция	выводит тип данных переданных элементов.
	std::cout << "Задача 2.\n";
	std::cout << "Большее из чисел 21,12,17 -> " << max_V(21, 12, 17)<< "\n\n";
	std::cout << "Большее из чисел 21,12,17 -> " << max_V((short)21, (short)12, (short)17) << "\n\n";
	std::cout << "Большее из чисел 12.2,12.3,12.1 -> " << max_V(12.2, 12.3, 12.1) << "\n\n";

	//Задача 3
	//	Напишите шаблонную функцию для нахождения минимального элемента массива.Функция должна работать с любым типом данных.
	const int lenght = 10;
	int arr[lenght]{ 2,3,6,8,2,4,9,5,6,1 };
	double arr1[lenght]{ 2.3,4.5,2.0,5.7,1.9,4.1,5.6,3.2,3.1,6.5 };
	long arr2[lenght]{ 34l,45l,56l,12l,67l,28l,78l,22l,41l,61l };
	std::cout << "Минимальный элемент массива INT = " << Min_Arr_Val(arr, lenght) << "\n";
	std::cout << "Минимальный элемент массива DOUBLE = " << Min_Arr_Val(arr1, lenght) << "\n";
	std::cout << "Минимальный элемент массива LONG = " << Min_Arr_Val(arr2, lenght) << "\n";
	return 0;
}
template <typename T>
T Min_Arr_Val(T arr[],const int lenght) {
	T min = arr[0];
	for (int i = 1; i < lenght; i++)
			if (min > arr[i])
				min = arr[i];
	return min;
}

int max_V(int num1, int num2, int num3) {
	std::cout << "INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
short max_V(short num1, short num2, short num3) {
	std::cout << "SHORT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
double max_V(double num1, double num2, double num3) {
	std::cout << "DOUBLE\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}
inline double mean(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}