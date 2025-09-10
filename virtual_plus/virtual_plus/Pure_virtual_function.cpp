// 순수 가상 함수와 추상 클래스
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
	void speak() override { std::cout << "왈왈" << std::endl; }
};

class Cat : public Animal {
public:
	Cat() : Animal() {} 
	void speak() override { std::cout << "야옹 야옹" << std::endl; }
};

int main() {
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	dog->speak();
	cat->speak();
}

// 가상함수에 =0; 을 붙여서 반드시 오버라이딩 되도록 만든 함수를 완전한 가상 함수라 해서, 순수 가상 함수라고 부름 

// 순수 가상 함수를 최소 한 개 이상 포함하고 있는 클래스는 객체를 생성할 수 없으며, 
// 인스턴스화 시키기 위해서는 이 클래스를 상속받는 클래스를 만들어서 모든 순수 가상 함수를 오버라이딩 해주어야만 함

// 순수 가상 함수를 최소 한개 포함하고 있는- 반드시 상속되어야 하는 클래스를 가리켜 추상 클래스라고 부름 