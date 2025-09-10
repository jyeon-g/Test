/*#include <iostream>
#include <string>

class Base {
	std::string s;

public:
	Base() : s("���") { std::cout << " ��� Ŭ���� " << std::endl; }

	void what() { std::cout << s << std::endl; }

};
class Derived : public Base {
	std::string s;

public: 
	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }
	void what() { std::cout << s << std::endl; }
};
int main() {
	std::cout << " === ��� Ŭ���� ���� === " << std::endl;
	Base p;

	p.what();

	std::cout << " === �Ļ� Ŭ���� ���� === " << std::endl;
	Derived c;

	c.what();

	return 0;
} */

/*
ex) class Manager : public Employee
- Manager Ŭ������ Employee�� ��� ����� ���� 
- Manager is Employee 
- ��� ��Ӱ���� is a ������ �� �� ����. �ڹٲٸ� �������� ���� 

��� Ŭ�������� ���踦 is a�θ� ǥ���� �� �ִ� �� �ƴ�. has- a ���谡 �����ϱ⵵ ��
ex) �ڵ��� Ŭ������ �����ϱ� ���ؼ��� ���� Ŭ����, �극��ũ Ŭ����, ����� Ŭ���� �� �� ���� Ŭ������ �ʿ� 
*/

#include <iostream>
#include <string>
// �ڵ� ����

class Base {
	std::string s;

public:
	Base() : s("���") { std::cout << "��� Ŭ����" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
	std::string s;

public:
	Derived() : s("�Ļ�"), Base() { std::cout << "�Ļ� Ŭ����" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

int main() {
	Base p;
	Derived c;

	std::cout << " === ������ ���� === " << std::endl;
	Base* p_p = &p;

	Derived* p_c = dynamic_cast<Derived*>(p_p);
	p_c->what();

	return 0;
}