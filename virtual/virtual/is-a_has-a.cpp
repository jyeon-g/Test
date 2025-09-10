/*#include <iostream>
#include <string>

class Base {
	std::string s;

public:
	Base() : s("기반") { std::cout << " 기반 클래스 " << std::endl; }

	void what() { std::cout << s << std::endl; }

};
class Derived : public Base {
	std::string s;

public: 
	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }
	void what() { std::cout << s << std::endl; }
};
int main() {
	std::cout << " === 기반 클래스 생성 === " << std::endl;
	Base p;

	p.what();

	std::cout << " === 파생 클래스 생성 === " << std::endl;
	Derived c;

	c.what();

	return 0;
} */

/*
ex) class Manager : public Employee
- Manager 클래스는 Employee의 모든 기능을 포함 
- Manager is Employee 
- 모든 상속관계는 is a 관계라고 볼 수 있음. 뒤바꾸면 성립되지 않음 

모든 클래스들의 관계를 is a로만 표현할 수 있는 건 아님. has- a 관계가 성립하기도 함
ex) 자동차 클래스를 구성하기 위해서는 엔진 클래스, 브레이크 클래스, 오디오 클래스 등 수 많은 클래스가 필요 
*/

#include <iostream>
#include <string>
// 코드 변형

class Base {
	std::string s;

public:
	Base() : s("기반") { std::cout << "기반 클래스" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
	std::string s;

public:
	Derived() : s("파생"), Base() { std::cout << "파생 클래스" << std::endl; }

	void what() { std::cout << s << std::endl; }
};

int main() {
	Base p;
	Derived c;

	std::cout << " === 포인터 버젼 === " << std::endl;
	Base* p_p = &p;

	Derived* p_c = dynamic_cast<Derived*>(p_p);
	p_c->what();

	return 0;
}