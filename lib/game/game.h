//#include "../utils/utils.h"
#include "battle.h"
//#include "enemy.h"
#include "weapon.h"
#include "island.h"
#include "../utils/autosave.h"
void preGAME()
{
	system("cls");
	colorful("player");
	slowSay("���������������ͷ��ʹ����\n");
	colorful("narrator");
	slowSay("��������������ͷ�����Ĵ���ȥ���������죬����һɫ��������ۼ\n");
	slowSay("ɳ̲���ؽ�ƣ����ż���ӹ�һȺ��Ÿ����м��������һͷ����ˮ��\n");
	colorful("player");
	slowSay("�ҡ������ȿȣ�Ϊʲô�������ȿȣ��������\n");
	colorful("narrator");
	slowSay("��ȳ�Ǻ���ĺ�ˮ��������ɳ̲�ϡ�\n");
	slowSay("������ãȻ�޴�ʱ��һֻ����ͻȻ���������ǰ��\n");
	colorful("system");
	slowSay("�����ڼ���ս��ϵͳ��\n");
	slowSay("������Ϊ��������������\n");
	if (quickSay) getch();
	newWeapon("���ֳ���");
	colorful("player");
	slowSay("����ʲô��\n");
	colorful("system");
	slowSay("ûʱ������ˣ��칥����ֻ����\n");
	if (quickSay) getch();
	BATTLE("��ͨ��ʿ");
	system("cls");
	colorful("system");
	slowSay("��������������ð�հ�");
	cout << "�����������" << endl;
	getch();
	system("cls");
}
void GAME()
{
	if(!check_for_saves())preGAME();
	load();;
	bool firstIsland = true;
	while (true)
	{
		if (!firstIsland)
		{
			colorful("system");
			slowSay("������ǰ����һ�����졻");
			Sleep(500);
			system("cls");
		}
		firstIsland = false;
		float island = random();
		if (abs(island - 0.711) <= 0.01) luckyIsland();	
		if (abs(island - 0.405) <= 0.01) deathIsland();
		if (abs(island - 0.523) <= 0.01) finishIsland();
		if (0 / 12.0 <= island && island < 4 / 12.0) battleIsland();
		if (4 / 12.0 <= island && island < 7 / 12.0) weaponIsland();
		if (7 / 12.0 <= island && island < 12 / 12.0) curingIsland();
		if (p_hp <= 0) break;
		if(p_hp<p_maxhp-20){
			colorful("system");
			slowSay("�����Զ�Ϊ���ظ�20��HP��");
			Sleep(500);
		}
		save();
	}
}
