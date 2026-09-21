#include <iostream>
#include "io.cpp"
#include "sortings.cpp"


// TODO Интерфейс пользователя должен быть на русском языке
int main() {
    // TODO Пользователь вводит размер массив и элементы массива
	int n;
	std::cin >> n;
	if (n <= 0){
		return 0;
	}
	int rar[n];
	for (int i = 0; i < n; i++){
		std::cin >> rar[i];
	}
	biv::print_array("массив не отсорт:", rar, n);
	
    
	// TODO вызвается void my_sort(int *arr, int size)
	biv::my_sort(rar, n);
	// TODO Выводится первоначальный массив и отсортированный
	biv::print_array("массив отсорт:", rar, n);
	return 0;
}

