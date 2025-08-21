//구조체 안의 구조체

/*#include <stdio.h>

struct employee {
	int age;
	int salary;
};
struct company {
	struct employee data;
	char name[10];
};

int main() {
	struct company Kim;

	Kim.data.age = 31;
	Kim.data.salary = 3000000;

	printf("Kim's age : %d \n", Kim.data.age);
	printf("Kim's salary : %d$/year \n", Kim.data.salary);

	return 0;
} */

//구조체를 리턴하는 함수 

#include<stdio.h>
struct AA function(int j);
struct AA {
	int i;
};
int main() {
	struct AA a;

	a = function(10);
	printf("a.i : %d \n", a.i);

	return 0;
}
struct AA function(int j) {
	struct AA A;
	A.i = j;

	return A;
}