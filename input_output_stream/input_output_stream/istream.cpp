// istream Ŭ����
// operator >>
/*
#include <iostream>
#include <string>

int main() {
	std::string s;
	while (true) {
		std::cin >> s;
		std::cout << "word : " << s << std::endl;

	}
}
*/
/*
// ���� �� ��
#include <iostream>
using namespace std;

int main() {
	int t;
	while (true) {
		std::cin >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (t == 0) break;
	}
}
*/
/*
// �ذ� ���
#include <iostream>
#include <string>

int main() {
	int t;
	while (std::cin >> t) {
		std::cout << "�Է� :: " << t << std::endl;
		if (t == 0) break;
	}
}
*/
/*
#include <iostream>
#include <string>

int main() {
	int t;
	std::cin >> t; // ���������� ���ڸ� �Է��ϸ� failbit�� ���� 
	std::cout << " fail ��Ʈ�� ���� �����̹Ƿ�, �Է¹��� �ʴ´�. " << std::endl;
	std::string s;
	std::cin >> s;
}
*/

// ���� �ذ�
#include <iostream>
#include <string>

int main() {
	int t;
	while (true) {
		std::cin >> t;
		std::cout << " �Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "����� �Է����ּ��� " << std::endl;
			std::cin.clear();	// �÷��� �ʱ�ȭ
			std::cin.ignore(100, '\n');	// ���� ���ڰ� ���� �� ���� ����
		}
		if (t == 1) break;
	}
}