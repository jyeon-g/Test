// streambuf ����
#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;

	// ��ġ �����ڸ� �� ĭ �ű��, �� ���� ���ڸ� ���ĺ��� (�� ���� �������� ����)
	char peek = std::cin.rdbuf()->snextc();
	if (std::cin.fail()) std::cout << "Failed";
	std::cout << " �� ��° �ܾ� �� �ձ��� : " << peek << std::endl;
	std::cin >> s;
	std::cout << "�ٽ� ������ : " << s << std::endl;

}
// snextc �Լ��� ��Ʈ�� ��ġ �����ڸ� �� ĭ ������Ų ��, �� �ڸ��� �ش��ϴ�
// ���ڸ� ����.(�д� ���� �ƴ�, �ش� ���ڸ� �а� ��Ʈ�� ��ġ �����ڸ� �������� ����)

