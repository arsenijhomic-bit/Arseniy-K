#include <iostream>

void print_array(const char* const comment, int* arr, const int size) {
	for (int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void my_sort(int* const arr, const int size) {
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int z = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = z;
            }
        }
    }
}

// TODO Интерфейс пользователя должен быть на русском языке
int main() {
    // TODO Пользователь вводит размер массив и элементы массива
	int n;
	std::cin >> n;
	if (n <= 0){
		return 0;
	}
	int *rar = new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> rar[i];
	}
	print_array("массив не отсорт:", rar, n);
	
    
	// TODO вызвается void my_sort(int *arr, int size)
	my_sort(rar, n);
	// TODO Выводится первоначальный массив и отсортированный
	print_array("массив отсорт:", rar, n);
	delete[] rar;
	return 0;
}

