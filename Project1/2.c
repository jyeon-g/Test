/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[30];
	int i;

	scanf("%d", &i);
	scanf("%s", str);

	printf("str : %s", str);

	return 0;

}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str1[10], str2[10];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str1);
	printf("�Է��� ���ڿ�: %s \n", str1);

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str2);
	printf("�Է��� ���ڿ� : %s \n", str2);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	char c;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	getchar();

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &c);
	return 0;
	
}