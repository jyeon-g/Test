#include <stdio.h>
int stradd(char* dest, char* src);
int main() {
	char str1[100] = "hello my name is ";
	char str2[] = "Pjy";

	printf("��ġ�� ���� : %s \n", str1);

	stradd(str1, str2);

	printf("��ģ ���� : %s \n", str1);

	return 0;
}



int stradd(char* dest, char* src) {
	// dest�� ���κ��� ã�� 
	while (*dest) {
		dest++;
	}
	// while���� ������ ���� dest�� dest���ڿ��� null���ڸ� ����Ű�� �ְԵ�
	// ���� src�� ���ڿ����� dest�� null �����ִ°����� �����سִ´�.
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	//���������� dest�� null�� �߰� (�ֳ��ϸ� src�� null���� �߰����� �ʾұ⶧��

	*dest = '\0';

	return 1;
}
