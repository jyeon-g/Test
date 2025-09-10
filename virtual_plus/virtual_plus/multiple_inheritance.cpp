// 다중 상속
#include <iostream>
class A {
public:
	int a;
	
	A() { std::cout << "A 생성자 호출" << std::endl; }
};

class B {
public:
	int b;

	B() { std::cout << "B 생성자 호출" << std::endl; }
};
// public A, B의 순서를 바꾸면 A-B-C 순서대로 호출
// public B, A 순서로 호출하면 B-A-C 순서로 호출
class C : public B, public A {
public:
	int c;

	C() : A(), B() { std::cout << "C 생성자 호출" << std::endl; }
};

int main() {
	C c;
}

// 다중 상속시 주의할 점 
// 같은 이름의 함수가 있다면 똑같이 어떤 함수를 호출해야할지 구분할 수 없음
// 다이아몬드 상속 -> virtual로 상속받음 => 상속받은 클래스의 생성자를 호출해 주어야함 