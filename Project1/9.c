//����ü�� ������ 
/*#include <stdio.h>

struct test
{
	int a, b;
};
int main() {
	struct test st;
	struct test *ptr;
	
	ptr = &st;

	(*ptr).a = 1;
	(*ptr).b = 2;

	printf("st�� a ��� : %d \n", st.a);
	printf("st�� b ���: %d \n", st.b);

	return 0;


} */

//����ü ������ ���� 
#include <stdio.h>

int add_one(int* a);
struct TEST {
	int c;
};

int main() {
	struct TEST t;
	struct TEST* pt = &t;
	 
	// *pt�� ����Ű�� ����ü ������ c ����� ���� 0���� ��
	pt->c = 0;

	//add_one �Լ��� ���ڿ� t ����ü ������ ��� c�� �ּҰ��� �����ϰ� �ִ�.
	add_one(&t.c);

	printf("t.c : %d \n", t.c);

	//add_one �Լ� ���ڿ� pt�� ����Ű�� ����ü ������ ��� c�� �ּҰ��� �����ϰ� �ִ�.

	add_one(&pt->c);

	printf("t.c : %d \n", t.c);

	return 0;
}

int add_one(int* a) {
	*a += 1;
	return 0;

}