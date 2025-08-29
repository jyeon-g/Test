// mutable 변이 가능한 이라는 의미, const함수에서도 이들 값을 바꿀 수 있음 

#include <iostream>

class A {
	mutable int data_;

public:
	A(int data) : data_(data) {}
	void DoSomething(int x) const {
		data_ = x; // 가능 !
	}

	void PrintData() const { std::cout << "data : " << data_ << std::endl; }
};

int main() {
	A a(10);
	a.DoSomething(3);
	a.PrintData();
}

//  mutable 키워드는 const 함수 안에서 해당 멤버 변수에 const 가 아닌 작업을 할 수 있게 만들어줌 