// Wrapper Ŭ������ ���𰡸� �����ϴ� Ŭ������� �ǹ�
// � ��쿡 �⺻ �ڷ������� ��ü�ν� �ٷ����� �� �⺻ �ڷ������� Ŭ������ �����ؼ� ������ �ڷ����� ��ü�� ����ϴ� ���� wrapper Ŭ������ �̿��Ѵٴ� ��
#include <iostream>

class Int {
	int data;
	// some other data

public:
	Int(int data) : data(data) {}
	Int(const Int& i) : data(i.data) {}

	operator int() { return data; }
	
};

int main() {
	Int x = 3;
	int a = x + 4;

	x = a * 2 + x + 4;
	std::cout << x << std::endl;
}

// Ÿ�� ��ȯ ������ 
// operator ( ��ȯ �ϰ��� �ϴ� Ÿ�� ) ()

