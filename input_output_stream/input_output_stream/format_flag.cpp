// ���� �÷��׿� ������ 

/*
#include <string>
#include <iostream>

int main() {
	int t;
	while (true) {
		std::cin.setf(std::ios_base::hex, std::ios_base::basefield);
		std::cin >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "����� �Է����ּ��� " << std::endl;
			std::cin.clear();	// �÷��׵��� �ʱ�ȭ �ϰ�
								// std::cin.ignore(100, '\n'); // ���๮�ڰ� ���� ������
								// �����Ѵ�
		}
		if (t == 0) break;
	}
}
*/

// �������� ���
#include <iostream>
#include <string>

int main() {
	int t;
	while (true) {
		std::cin >> std::hex >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "����� �Է����ּ���" << std::endl;
			std::cin.clear();	// �÷��׵��� �ʱ�ȭ�ϰ�
			std::cin.ignore(100, '\n');	// ���๮�ڰ� ���� ������ ����
		}
		if (t == 0) break;
	}
}
// hex�� ���� ��Ʈ���� �����Ͽ� �Է� Ȥ�� ��� ����� �ٲ��ִ� �Լ��� ������
