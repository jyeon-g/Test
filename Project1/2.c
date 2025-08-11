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

	printf("문자열을 입력하세요 : ");
	scanf("%s", str1);
	printf("입력한 문자열: %s \n", str1);

	printf("문자열을 입력하세요 : ");
	scanf("%s", str2);
	printf("입력한 문자열 : %s \n", str2);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	getchar();

	printf("문자를 입력하세요 : ");
	scanf("%c", &c);
	return 0;
	
}