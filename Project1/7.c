//����ü�� ���� 

#include<stdio.h>
struct Human // ����ü ���� 
{
	int age;
	int height;
	int weight;

};

int main() {
	struct Human Psi;
	{
		Psi.age = 99;
		Psi.height = 185; // ����ü ����
		Psi.weight = 80;

		printf("Psi�� ���� ���� \n");
		printf("���� : %d \n", Psi.age);
		printf("Ű : %d \n", Psi.height);
		printf("������ : %d \n", Psi.weight);
		return 0;
	};
}