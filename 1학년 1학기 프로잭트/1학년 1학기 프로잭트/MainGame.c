#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <string.h>

struct Player
{
	char name[30];

	int STR;	//�ٷ�		-	�������ݷ�
	int MP;		//����		-	�������ݷ�
	int STM;	//���׹̳�	-	�ִ�ü������
//	int AGI		=	0;		//��ø	-	ġ��ŸȮ��
//	int INT		=	0;		//����	-	��Ÿ�Ӱ���
//	int STM		=	0;		//���	-	�������

	int LV;		//����	-	��ų����Ʈ����
	int SP;		//��ų����Ʈ
	float HP;	//ü��
}typedef Player;

void CutLine();

void StatusCheck(Player* _player);

int main()
{
	system("cls");
	Player player = { 0,0,0,0,0,100.0f };

	printf("����� �̸���? : ");		scanf("%s", &player.name);

	StatusCheck(&player);

	return 0;
}

void CutLine() {
	printf("--------------------------------------------------\n");
}

void StatusCheck(Player* _player) {
	system("cls");
	printf("�̸� : %s\n", _player->name);
	CutLine();
	printf("���� : %d LV\n", _player->LV);
	printf("ü�� : %.2f\n", _player->HP);
	CutLine();
	printf("�ٷ� : %d\n", _player->STR);
	printf("���� : %d\n", _player->MP);
	printf("���׹̳� : %d\n", _player->STM);
}