// 형식 플래그와 조직자 

/*
#include <string>
#include <iostream>

int main() {
	int t;
	while (true) {
		std::cin.setf(std::ios_base::hex, std::ios_base::basefield);
		std::cin >> t;
		std::cout << "입력 :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "제대로 입력해주세요 " << std::endl;
			std::cin.clear();	// 플래그들을 초기화 하고
								// std::cin.ignore(100, '\n'); // 개행문자가 나올 때까지
								// 무시한다
		}
		if (t == 0) break;
	}
}
*/

// 조작자의 사용
#include <iostream>
#include <string>

int main() {
	int t;
	while (true) {
		std::cin >> std::hex >> t;
		std::cout << "입력 :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "제대로 입력해주세요" << std::endl;
			std::cin.clear();	// 플래그들을 초기화하고
			std::cin.ignore(100, '\n');	// 개행문자가 나올 때까지 무시
		}
		if (t == 0) break;
	}
}
// hex와 같이 스트림을 조작하여 입력 혹은 출력 방식을 바꿔주는 함수를 조작자
