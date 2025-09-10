// istream 클래스
// operator >>
/*
#include <iostream>
#include <string>

int main() {
	std::string s;
	while (true) {
		std::cin >> s;
		std::cout << "word : " << s << std::endl;

	}
}
*/
/*
// 주의 할 점
#include <iostream>
using namespace std;

int main() {
	int t;
	while (true) {
		std::cin >> t;
		std::cout << "입력 :: " << t << std::endl;
		if (t == 0) break;
	}
}
*/
/*
// 해결 방안
#include <iostream>
#include <string>

int main() {
	int t;
	while (std::cin >> t) {
		std::cout << "입력 :: " << t << std::endl;
		if (t == 0) break;
	}
}
*/
/*
#include <iostream>
#include <string>

int main() {
	int t;
	std::cin >> t; // 고의적으로 문자를 입력하면 failbit가 켜짐 
	std::cout << " fail 비트가 켜진 상태이므로, 입력받지 않는다. " << std::endl;
	std::string s;
	std::cin >> s;
}
*/

// 문자 해결
#include <iostream>
#include <string>

int main() {
	int t;
	while (true) {
		std::cin >> t;
		std::cout << " 입력 :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "제대로 입력해주세요 " << std::endl;
			std::cin.clear();	// 플래그 초기화
			std::cin.ignore(100, '\n');	// 개행 문자가 나올 때 까지 무시
		}
		if (t == 1) break;
	}
}