//구조체와 포인터 
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

	printf("st의 a 멤버 : %d \n", st.a);
	printf("st의 b 멤버: %d \n", st.b);

	return 0;


} */

//구조체 포인터 연습 
#include <stdio.h>

int add_one(int* a);
struct TEST {
	int c;
};

int main() {
	struct TEST t;
	struct TEST* pt = &t;
	 
	// *pt가 가리키는 구조체 변수의 c 멤버의 값을 0으로 함
	pt->c = 0;

	//add_one 함수가 인자에 t 구조체 변수의 멤버 c의 주소값을 전달하고 있다.
	add_one(&t.c);

	printf("t.c : %d \n", t.c);

	//add_one 함수 인자에 pt가 가리키는 구조체 변수의 멤버 c의 주소값을 전달하고 있다.

	add_one(&pt->c);

	printf("t.c : %d \n", t.c);

	return 0;
}

int add_one(int* a) {
	*a += 1;
	return 0;

}