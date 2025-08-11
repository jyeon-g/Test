#include <stdio.h>
#include <stdlib.h>

struct Node* InsertNode(struct Node* current, int data);
void DestoryNode(struct Node* destory);
struct Node* CreateNode(int data);
void PrintNodeFrom(struct Node* from);

struct Node {
	int data;	//������
	struct Node* nextNode; // ������带 ����Ű�� �κ�

};

int main() {
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	//Node2�ڿ� Node4�ֱ� 
	struct Node* Node4 = InsertNode(Node2, 400);

	PrintNodeFrom(Node1);
	return 0;

}

void PrintNodeFrom(struct Node* from) {
	//from�� NULL�ϋ�����, �� ���κп� �����ҋ����� ���

	while (from) {
		printf("����� ������ : %d \n", from->data);
		from = from->nextNode;

	}
}
//current��� ��� �ڿ� ��带 ���� �����ִ� �Լ� 
struct Node* InsertNode(struct Node* current, int data) {
	//current ��尡 ����Ű�� �ִ� ������尡 after�̴�.
	struct Node* after = current->nextNode;

	//���ο� ��带 ����
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	//�� ��忡 ���� �־���
	newNode->data = data;
	newNode->nextNode = after;

	//current�� ���� newNode�� ����Ŵ
	current->nextNode = newNode;

	return newNode;
}

//���õ� ��带 �ı��ϴ� �Լ� 
void DestoryNode(struct Node* destory, struct Node* head) {

	struct Node* next = head; //������带 ����ų ������

	if (destory == head) {	//head�� �ı��Ϸ� �Ѵ��
		free(destory);
		return;
	}
		//���� next�� null�̸� ����
	while (next) {	//���� next ������尡 destory��� next�� destory �ճ��
		if (next->nextNode == destory) {	//���� next ���� ���� destory�� �ƴ϶� destory�� ���� ��尡 ��
			next->nextNode = destory->nextNode;
		}	//next�� ���� ��带 ����Ŵ
		next = next->nextNode;
	}
	free(destory);
}
// �� ��带 ����� �Լ� 7
struct Node* CreateNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->nextNode = NULL;

	return newNode;
}