#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>


int main() {
	setlocale(LC_ALL, "Russian");
	
	int n, m;
	
	// Задача 1. Сортировка 5 элементов.
	/*
	srand(time(NULL));
	std::cout << "Задача 1.\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];

	for (int i{}; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	// Пузырьком

	//	for (int i = 4; i > 0; i--)
	//		for (int j = 0; j < i; j++)
	//			if (arr1[j] > arr1[j + 1])
	//				std::swap(arr1[j], arr1[j + 1]);

	// Быстрая
	std::sort(arr1, arr1 + 5); // последнее значние - длина массива.

	std::cout << "\nИтоговый массив:\n";

	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << "\n\n";
	*/

	// Задача 2. Температура в январе.
	/*
	const int size2{ 31 };
	int arr2[size2];
	srand(time(NULL));

	std::cout << "Задача 2.\nТемпература за все дния января:\n";

	for (int i{}; i < size2; i++){
		arr2[i] = rand() % (-1 + 1 - 30) - 30;
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b.\n";

	std::cout << "\nВведите max t для отображения -> ";
	std::cin >> n;
	int sum{}, counter{};
	for (int i{}; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] <= n)
			counter++;
	}
	std::cout << "Средняя температура за месяц = " << (double)sum / size2 << "\n";
	std::cout << "Кол-во дней, в которых температура опускалась ниже " << n << " градусов: " << counter << "\n\n";
	*/

	// Задача 3. Вхождение в диапазон.
	srand(time(NULL));
	std::cout << "\nЗадача 3.\n Введите начало диапазона -> ";
	std::cin >> n;
	std::cout << "Введите конец диапазона -> ";
	std::cin >> m;
	const int size3{ 20 };
	int arr3[size3];

	std::cout << "Массив:\n";

	for (int i{}; i < size3; i++) {
		arr3[i] = rand() % 100;
		if (arr3[i] >= n && arr3[i] <= m) {
			std::cout <<i + 1 << ". " << arr3[i] << "!\n";
		}
		else
			std::cout << i + 1 << ". " << arr3[i] << "\n";
	}
	std::cout << std::endl;







	return 0;
}