//���� �����
/*#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	FILE* fp;
	fp = fopen("a.txt", "w");	//FILE *fp = fopen ;���� ��

	if (fp == NULL) {
		printf("Write Error! \n");
		return 0;
	}
	fputs("Hello World!! \n", stdout);

	fclose(fp);
	return 0;
} */

#include <stdio.h>

int main() {
	FILE* fp = fopen("a.txt", "r");
	char buf[20];	//������ �Է¹��� ��
	if (fp == NULL) {
		printf("READ ERROR!! \n");
		return 0;
	}
	fgets(buf, 20, fp);
	printf("�Է¹޴� ���� : %s \n", buf);
	fclose(fp);
	return 0;
}