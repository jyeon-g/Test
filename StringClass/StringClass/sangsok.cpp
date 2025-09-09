// 상속 

#include <iostream>
#include <string>

class Base {
	std::string s;
public:
	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
	std::string s;

public :
	Derived() : Base(), s("파생") {
		std::cout << "파생 클래스" << std::endl;

		//Base에서 what()을 물려받았으므로 
		//Derived에서 당연히 호출 가능 
		what();
	}
};

int main() {
	std::cout << " === 기반 클래스 생성 === " << std::endl;
	Base p;

	std::cout << " === 파생 클래스 생성 === " << std::endl;
	Derived c;

	return 0;
}

#include <iostream>
#include <string>

class Base {
protected:
	std::string parent_string;

public:
	Base() : parent_string("기반") { std::cout << "기반 클래스" << std::endl; }

	void what() { std::cout << parent_string << std::endl; }
};
class Derived : public Base {
	std::string child_string;

public:
	Derived() : Base(), child_string("파생") {
		std::cout << "파생 클래스" << std::endl;

		// 그렇다면 현재 private 인 Base 의
		// parent_string 에 접근할 수 있을까?
		parent_string = "바꾸기";
	}

	void what() { std::cout << child_string << std::endl; }
};
// public으로 상속 하였다면 기반 클래스의 접근 지시자들의 영향 없이 그대로 작동 
// protected로 상속하였다면 파생 클래스 입장에서 public은 protected로 바뀌고 나머지는 그대로 유지
// private로 상속하였다면 파생 클래스 입장에서 모든 접근 지시자들이 private가 됨
