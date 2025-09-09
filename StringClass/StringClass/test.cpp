#include <iostream>
#include <string>

class Base {
public :
	std::string parent_string;

	Base() :parent_string("���") { std::cout << "��� Ŭ����" << std::endl; }

	void what() { std::cout << parent_string << std::endl; }

};

class Derived : private Base {
	std::string child_string;

public:
	Derived() : child_string("�Ļ�"), Base() {
		std::cout << "�Ļ� Ŭ����" << std::endl;
	} 

	void what() { std::cout << child_string << std::endl; }
};

int main() {
	Base p;
	// Base ������ parent_string�� public �̹Ƿ� 
	// �ܺο��� �翬�� ���� �����ϴ�
	std::cout << p.parent_string << std::endl;

	Derived c;
	// �ݸ鿡 Derived ������ parent_string�� 
	// (private���� ����� �޾ұ� ������) private��
	// �Ǿ �ܺο��� ������ �Ұ��� 
	std::cout << c.parent_string << std::endl;

	return 0;

}