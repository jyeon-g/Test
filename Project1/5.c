// 문자열 비교하기 
#include <stdio.h>
int compare(char* str1, char* str2);
int main() {
	char str[20] = "hello every1";
	char str2[20] = "hello everyone";
	char str3[20] = "hello every1 hi";
	char str4[20] = "hello every1";

	if (compare(str, str2)) {
		printf("%s와 %s는 같다 \n", str, str2);
	}
	else {
		printf("%s와 %s는 다르다 \n", str, str2);
	}
	if (compare(str, str3)) {
		printf("%s와 %s는 같다 \n", str, str3);
	}
	else {
		printf("%s와 %s는 다르다 \n", str, str3);
	}
	if (compare(str, str4)) {
		printf("%s와 %s는 같다 \n", str, str4);
	}
	else {
		printf("%s와 %s는 다르다 \n", str, str4);
	}
	return 0;
}

int compare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) { // str1, str2 가 같지 않음면 실행 
			return 0;	// 0으로 리턴 
		}
		str1++;	//1글자씩 증감 
		str2++;
	}
	if (*str2 == '\0') return 1;	// str2값에 널이 있으면 1로 리턴 

	return 0;
}