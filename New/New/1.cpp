// new�� �迭 �Ҵ��ϱ�

#include <iostream>

int main() {
	int arr_size;
	std::cout << "arr_size: ";
	std::cin >> arr_size;
	int* list = new int[arr_size]; // new�� �迭 �Ҵ�
	for (int i = 0; i < arr_size; i++) {
		std::cin >> list[i]; // �迭�� �� �Է�
	}
	for (int i = 0; i < arr_size; i++) {
		std::cout << i << "th element of list : " << list[i] << std::endl; // �迭 �� ���
	}
	delete[] list; // �Ҵ��� �迭 �޸� ����
	return 0;

}