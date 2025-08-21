#include <stdio.h>
int stradd(char* dest, char* src);
int main() {
	char str1[100] = "hello my name is ";
	char str2[] = "Pjy";

	printf("합치기 이전 : %s \n", str1);

	stradd(str1, str2);

	printf("합친 이후 : %s \n", str1);

	return 0;
}



int stradd(char* dest, char* src) {
	// dest의 끝부분을 찾음 
	while (*dest) {
		dest++;
	}
	// while문을 지나고 나면 dest는 dest문자열의 null문자를 가리키고 있게됨
	// 아재 src의 문자열들을 dest의 null 문자있는곳부터 복사해넣는다.
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	//마지막으로 dest의 null값 추가 (왜냐하면 src에 null값이 추가되지 않았기때문

	*dest = '\0';

	return 1;
}
