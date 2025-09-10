// ���� ���� �Լ��� �߻� Ŭ����
#include <iostream>

class Animal {
public:
	Animal() {}
	virtual ~Animal() {}
	virtual void speak() = 0;
};

class Dog : public Animal {
public :
	Dog() :Animal() {}
	void speak() override { std::cout << "�п�" << std::endl; }
};

class Cat : public Animal {
public:
	Cat() : Animal() {} 
	void speak() override { std::cout << "�߿� �߿�" << std::endl; }
};

int main() {
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	dog->speak();
	cat->speak();
}

// �����Լ��� =0; �� �ٿ��� �ݵ�� �������̵� �ǵ��� ���� �Լ��� ������ ���� �Լ��� �ؼ�, ���� ���� �Լ���� �θ� 

// ���� ���� �Լ��� �ּ� �� �� �̻� �����ϰ� �ִ� Ŭ������ ��ü�� ������ �� ������, 
// �ν��Ͻ�ȭ ��Ű�� ���ؼ��� �� Ŭ������ ��ӹ޴� Ŭ������ ���� ��� ���� ���� �Լ��� �������̵� ���־�߸� ��

// ���� ���� �Լ��� �ּ� �Ѱ� �����ϰ� �ִ�- �ݵ�� ��ӵǾ�� �ϴ� Ŭ������ ������ �߻� Ŭ������� �θ� 