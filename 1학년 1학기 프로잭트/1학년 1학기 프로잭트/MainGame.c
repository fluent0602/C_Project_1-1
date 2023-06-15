#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <string.h>

struct Player
{
	char name[30];

	int LV;			//레벨	-	스킬포인트증가
	int Class;		//직업	-	1. 전사, 2. 궁수, 3. 마법사, 4. 암살자
	int SP;			//스킬포인트
	float HP;		//현재HP
	float MaxHP;	//최대HP

	int STR;	//근력	-	물리공격력
	int MP;		//마력	-	마법공격력
	int STM;	//스테미나	-	최대체력증가
	int AGI;	//민첩	-	치명타확률
	int INT;	//지능	-	쿨타임감소
}typedef Player;

void CutLine();
void StatusCheck(Player* _player);

int main()
{
	system("cls");
	Player player = { {NULL},0,0,0,100.0f,100.0f,0,0,0,0,0 };

	printf("당신의 이름은? : "); scanf("%s", &player.name);
	CutLine();
	printf("1. 전사, 2. 궁수, 3. 마법사, 4. 암살자\n");		//기본 스텟 합계 20
	do {
		printf("당신의 직업은? : "); scanf("%d", &player.Class);
		switch (player.Class) {		//기본스텟 설정
		case 1:	//전사
			player.STR = 10; player.MP = 0; player.STM = 7; player.AGI = 3; player.INT = 0; break;
		case 2:	//궁수
			player.STR = 7; player.MP = 0; player.STM = 5; player.AGI = 5; player.INT = 3; break;
		case 3:	//마법사
			player.STR = 0; player.MP = 10; player.STM = 3; player.AGI = 0; player.INT = 7; break;
		case 4:	//암살자
			player.STR = 10; player.MP = 12; player.STM = 0; player.AGI = 5; player.INT = 3; break;
		default: printf("잘못 입력하였습니다. 다시 입력하시오."); break;
		}
	} while (player.Class == 0);

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
	printf("HP : %.0f/%.0f\n", _player->HP, _player->MaxHP);
	CutLine();
	printf("근력 : %d\n", _player->STR);
	printf("마력 : %d\n", _player->MP);
	printf("스테미나 : %d\n", _player->STM);
	printf("민첩 : %d\n", _player->AGI);
	printf("지능 : %d\n", _player->INT);
}