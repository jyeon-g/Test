 /*#include <stdio.h>

int str_length(char* str);
int main() {
	char str[] = { "What is your name ?" };

	printf("이 문자열의 길이 : %d \n", str_length(str));

	return 0;
}

int str_length(char* str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	
	return i; 
} */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char words[30];

	printf("30자 이내의 문자열을 입력해주세요! : ");
	scanf("%s", words);

	printf("문자열 : %s \n", words);

	return 0;

}