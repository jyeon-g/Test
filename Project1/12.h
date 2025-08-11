#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char compare(char* str1, char* srt2);

int main() {
	char str1[20];
	char str2[20];

	scanf("%s", str1);
	scanf("%s", str2);
	// campare함수는 두 문자열이 같으면 1, 다르면 0을 리턴
	if (compare(str1, str2)) {	// if문의 경우 괄호 안의 값이 0이면 거짓, 0이 아니면 참  
		printf("%s와 %s는 같은 문장 입니다 \n", str1, str2);
	}
	else {
		printf("%s와 %s는 다른 문장 입니다 \n", str1, str2);
	}
	return 0;
}

