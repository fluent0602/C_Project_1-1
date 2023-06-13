#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <string.h>

struct Player
{
	char name[30];

	int STR;	//근력		-	물리공격력
	int MP;		//마력		-	마볍공격력
	int STM;	//스테미나	-	최대체력증가
//	int AGI		=	0;		//민첩	-	치명타확률
//	int INT		=	0;		//지능	-	쿨타임감소
//	int STM		=	0;		//기력	-	기력증가

	int LV;		//레벨	-	스킬포인트증가
	int SP;		//스킬포인트
	float HP;	//체력
}typedef Player;

void CutLine();

void StatusCheck(Player* _player);

int main()
{
	system("cls");
	Player player = { 0,0,0,0,0,100.0f };

	printf("당신의 이름은? : ");		scanf("%s", &player.name);

	StatusCheck(&player);

	return 0;
}

void CutLine() {
	printf("--------------------------------------------------\n");
}

void StatusCheck(Player* _player) {
	system("cls");
	printf("이름 : %s\n", _player->name);
	CutLine();
	printf("레벨 : %d LV\n", _player->LV);
	printf("체력 : %.2f\n", _player->HP);
	CutLine();
	printf("근력 : %d\n", _player->STR);
	printf("마력 : %d\n", _player->MP);
	printf("스테미나 : %d\n", _player->STM);
}