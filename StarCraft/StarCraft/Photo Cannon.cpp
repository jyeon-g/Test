// 포토 캐논
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<iostream>

class Photo_Cannon {
	int hp, shield;
	int coord_x, coord_y;
	int damage;

	char* name;

public:
	Photo_Cannon(int x, int y);
	Photo_Cannon(int x, int y, const char* cannon_namae);
	Photo_Cannon(const Photo_Cannon& pc);
	~Photo_Cannon();
	void show_status();
};

Photo_Cannon::Photo_Cannon(const  Photo_Cannon& pc) {
	std::cout << "복사 생성자 호출 ! " << std::endl;
	hp = pc.hp;
	shield = pc.shield;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;
	damage = pc.damage;

	name = new char[strlen(pc.name) + 1];
	strcpy(name, pc.name);

}

Photo_Cannon::Photo_Cannon(int x, int y, const char* cannon_name) {
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

	name = new char[strlen(cannon_name) + 1];
	strcpy(name, cannon_name);
}

Photo_Cannon::Photo_Cannon(int x, int y) {
	std::cout << "생성자 호출 ! " << std::endl;
	hp = shield = 100;
	coord_x = x;
	coord_y = y;
	damage = 20;

}

Photo_Cannon::~Photo_Cannon() {
	if (name) delete[] name;
}

void Photo_Cannon::show_status() {
	std::cout << "Photo_Cannon : " << name<< std::endl;
	std::cout << "Location : ( " << coord_x << ", " << coord_y << " ) " << std::endl;
	std::cout << "HP : " << hp << std::endl;
}

int main() {
	Photo_Cannon pc1(3, 4, "Cannon");
	Photo_Cannon pc2 = pc1;

	pc1.show_status();
	pc2.show_status();

}