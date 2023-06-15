#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <string.h>

struct Player
{
	char name[30];

	int LV;			//����	-	��ų����Ʈ����
	int Class;		//����	-	1. ����, 2. �ü�, 3. ������, 4. �ϻ���
	int SP;			//��ų����Ʈ
	float HP;		//����HP
	float MaxHP;	//�ִ�HP

	int STR;	//�ٷ�	-	�������ݷ�
	int MP;		//����	-	�������ݷ�
	int STM;	//���׹̳�	-	�ִ�ü������
	int AGI;	//��ø	-	ġ��ŸȮ��
	int INT;	//����	-	��Ÿ�Ӱ���
}typedef Player;

void CutLine();
void StatusCheck(Player* _player);

int main()
{
	system("cls");
	Player player = { {NULL},0,0,0,100.0f,100.0f,0,0,0,0,0 };

	printf("����� �̸���? : "); scanf("%s", &player.name);
	CutLine();
	printf("1. ����, 2. �ü�, 3. ������, 4. �ϻ���\n");		//�⺻ ���� �հ� 20
	do {
		printf("����� ������? : "); scanf("%d", &player.Class);
		switch (player.Class) {		//�⺻���� ����
		case 1:	//����
			player.STR = 10; player.MP = 0; player.STM = 7; player.AGI = 3; player.INT = 0; break;
		case 2:	//�ü�
			player.STR = 7; player.MP = 0; player.STM = 5; player.AGI = 5; player.INT = 3; break;
		case 3:	//������
			player.STR = 0; player.MP = 10; player.STM = 3; player.AGI = 0; player.INT = 7; break;
		case 4:	//�ϻ���
			player.STR = 10; player.MP = 12; player.STM = 0; player.AGI = 5; player.INT = 3; break;
		default: printf("�߸� �Է��Ͽ����ϴ�. �ٽ� �Է��Ͻÿ�."); break;
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
	printf("�̸� : %s\n", _player->name);
	CutLine();
	printf("���� : %d LV\n", _player->LV);
	printf("HP : %.0f/%.0f\n", _player->HP, _player->MaxHP);
	CutLine();
	printf("�ٷ� : %d\n", _player->STR);
	printf("���� : %d\n", _player->MP);
	printf("���׹̳� : %d\n", _player->STM);
	printf("��ø : %d\n", _player->AGI);
	printf("���� : %d\n", _player->INT);
}