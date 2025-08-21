#include <stdio.h>
#include <stdlib.h>

struct Node* InsertNode(struct Node* current, int data);
void DestoryNode(struct Node* destory);
struct Node* CreateNode(int data);
void PrintNodeFrom(struct Node* from);

struct Node {
	int data;	//데이터
	struct Node* nextNode; // 다음노드를 가리키는 부분

};

int main() {
	struct Node* Node1 = CreateNode(100);
	struct Node* Node2 = InsertNode(Node1, 200);
	struct Node* Node3 = InsertNode(Node2, 300);
	//Node2뒤에 Node4넣기 
	struct Node* Node4 = InsertNode(Node2, 400);

	PrintNodeFrom(Node1);
	return 0;

}

void PrintNodeFrom(struct Node* from) {
	//from이 NULL일떄까지, 즉 끝부분에 도달할떄까지 출력

	while (from) {
		printf("노드의 데이터 : %d \n", from->data);
		from = from->nextNode;

	}
}
//current라는 노드 뒤에 노드를 새로 만들어넣는 함수 
struct Node* InsertNode(struct Node* current, int data) {
	//current 노드가 가리키고 있던 다음노드가 after이다.
	struct Node* after = current->nextNode;

	//새로운 노드를 생성
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	//새 노드에 값을 넣어줌
	newNode->data = data;
	newNode->nextNode = after;

	//current는 이제 newNode를 가리킴
	current->nextNode = newNode;

	return newNode;
}

//선택된 노드를 파괴하는 함수 
void DestoryNode(struct Node* destory, struct Node* head) {

	struct Node* next = head; //다음노드를 가리킬 포인터

	if (destory == head) {	//head를 파괴하려 한담녀
		free(destory);
		return;
	}
		//만일 next가 null이면 종료
	while (next) {	//만일 next 다음노드가 destory라면 next가 destory 앞노드
		if (next->nextNode == destory) {	//따라서 next 다음 노드는 destory가 아니라 destory의 다음 노드가 됨
			next->nextNode = destory->nextNode;
		}	//next는 다음 노드를 가리킴
		next = next->nextNode;
	}
	free(destory);
}
// 새 노드를 만드는 함수 7
struct Node* CreateNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = data;
	newNode->nextNode = NULL;

	return newNode;
}