#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char compare(char* str1, char* srt2);

int main() {
	char str1[20];
	char str2[20];

	scanf("%s", str1);
	scanf("%s", str2);
	// campare�Լ��� �� ���ڿ��� ������ 1, �ٸ��� 0�� ����
	if (compare(str1, str2)) {	// if���� ��� ��ȣ ���� ���� 0�̸� ����, 0�� �ƴϸ� ��  
		printf("%s�� %s�� ���� ���� �Դϴ� \n", str1, str2);
	}
	else {
		printf("%s�� %s�� �ٸ� ���� �Դϴ� \n", str1, str2);
	}
	return 0;
}

