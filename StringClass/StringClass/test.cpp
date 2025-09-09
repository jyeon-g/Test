#include <iostream>
#include <string>

class Base {
public :
	std::string parent_string;

	Base() :parent_string("기반") { std::cout << "기반 클래스" << std::endl; }

	void what() { std::cout << parent_string << std::endl; }

};

class Derived : private Base {
	std::string child_string;

public:
	Derived() : child_string("파생"), Base() {
		std::cout << "파생 클래스" << std::endl;
	} 

	void what() { std::cout << child_string << std::endl; }
};

int main() {
	Base p;
	// Base 에서는 parent_string이 public 이므로 
	// 외부에서 당연히 접근 가능하다
	std::cout << p.parent_string << std::endl;

	Derived c;
	// 반면에 Derived 에서는 parent_string이 
	// (private에서 상속을 받았기 때문에) private이
	// 되어서 외부에서 접근이 불가능 
	std::cout << c.parent_string << std::endl;

	return 0;

}