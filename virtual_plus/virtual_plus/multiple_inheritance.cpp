// ���� ���
#include <iostream>
class A {
public:
	int a;
	
	A() { std::cout << "A ������ ȣ��" << std::endl; }
};

class B {
public:
	int b;

	B() { std::cout << "B ������ ȣ��" << std::endl; }
};
// public A, B�� ������ �ٲٸ� A-B-C ������� ȣ��
// public B, A ������ ȣ���ϸ� B-A-C ������ ȣ��
class C : public B, public A {
public:
	int c;

	C() : A(), B() { std::cout << "C ������ ȣ��" << std::endl; }
};

int main() {
	C c;
}

// ���� ��ӽ� ������ �� 
// ���� �̸��� �Լ��� �ִٸ� �Ȱ��� � �Լ��� ȣ���ؾ����� ������ �� ����
// ���̾Ƹ�� ��� -> virtual�� ��ӹ��� => ��ӹ��� Ŭ������ �����ڸ� ȣ���� �־���� 