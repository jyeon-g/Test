// Wrapper 클래스는 무언가를 포장하는 클래스라는 의미
// 어떤 경우에 기본 자료형들을 객체로써 다루어야할 때 기본 자료형들을 클래스로 포장해서 각각의 자료형을 객체로 사용하는 것을 wrapper 클래스를 이용한다는 뜻
#include <iostream>

class Int {
	int data;
	// some other data

public:
	Int(int data) : data(data) {}
	Int(const Int& i) : data(i.data) {}

	operator int() { return data; }
	
};

int main() {
	Int x = 3;
	int a = x + 4;

	x = a * 2 + x + 4;
	std::cout << x << std::endl;
}

// 타입 변환 연산자 
// operator ( 변환 하고자 하는 타입 ) ()

