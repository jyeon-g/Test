 /*#include <stdio.h>

int str_length(char* str);
int main() {
	char str[] = { "What is your name ?" };

	printf("�� ���ڿ��� ���� : %d \n", str_length(str));

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

	printf("30�� �̳��� ���ڿ��� �Է����ּ���! : ");
	scanf("%s", words);

	printf("���ڿ� : %s \n", words);

	return 0;

}