// new로 배열 할당하기

#include <iostream>

int main() {
	int arr_size;
	std::cout << "arr_size: ";
	std::cin >> arr_size;
	int* list = new int[arr_size]; // new로 배열 할당
	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i]; // 배열에 값 입력
	}
	for (int i = 0; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl; // 배열 값 출력
	}
	delete[] list; // 할당한 배열 메모리 해제
	return 0;

}