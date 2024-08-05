//#include "../utils/utils.h"
#include "enemy.h" 
enum BATTLE_RESULT {
	WIN, LOSE
};
int BATTLE(string name)
{
	loadEnemie(name);
	system("cls");
	cout << "----------��ʼս��----------" << endl; 
	int round = 0;
	while (true)
	{
		cout << "��" << ++round << "�غ�" << endl;
		float crit = random();
		colorful("player");
		slowSay("��", 0);
		colorful("narrator");
		slowSay("����������", 0);
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("���", 0);
		if (crit <= p_critrate / 100.0)
		{
			slowSayint(p_critdam);
			slowSay("�㱩���˺�\n");
			e_hp -= p_critdam;
		}
		else
		{
			slowSayint(p_dam);
			slowSay("���˺�\n");
			e_hp -= p_dam;
		}
		e_firetime += p_firetime;
		if (--e_firetime >= 0 && !e_antifire)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("fire");
			slowSay("ȼ��", 0);
			colorful("narrator");
			slowSay("���", 0);
			colorful("fire");
			slowSayint(p_firedam);
			slowSay("������˺�");
			e_hp -= p_firedam;
		}
		
		if (p_poison > 0) e_poison++;
		if (e_poison == 5 && !e_antipoison)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("���ϵ�", 0);
			colorful("poison");
			slowSay("����", 0);
			colorful("narrator");
			slowSay("�ۻ���5�㣬����", 0);
			colorful("poison");
			slowSay("����", 0);
			colorful("narrator");
			slowSay("���", 0);
			colorful("posion");
			slowSayint(p_poison);
			slowSay("�㶾���˺�");
		}
		
		if (p_blood > 0 && !e_antiblood)
		{
			colorful("player");
			slowSay("��", 0);
			colorful("narrator");
			slowSay("��ȡ", 0);
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("��������", 0);
			colorful("blood");
			slowSay("�ָ�", 0);
			slowSayint(p_blood);
			slowSay("��Ѫ��");
		}
		
		e_ice += p_ice;
		e_frozen += e_ice / 100;
		e_ice %= 100;
		if (--e_frozen >= 0 && !e_antiice)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("���ϵ�", 0);
			colorful("ice");
			slowSay("����֮��", 0);
			colorful("narrator");
			slowSay("�ۻ���100����", 0);
			colorful("ice");
			slowSay("����", 0);
		}
		
		if (e_hp <= 0) {
			slowSay("��Ӯ��");
			getch();
			return WIN;
		}
		
		if (e_frozen >= 0 && !e_antiice)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("��", 0);
			colorful("ice");
			slowSay("����", 0);
			colorful("narrator");
			slowSay("�޷�����");
			cout << "�����������" << endl; 
			getch();
			system("cls");
		}
		
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("��ʣ", 0);
		slowSayint(e_hp); 
		slowSay("��Ѫ��\n");
		
		
		crit = random();
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("����������", 0);
		colorful("player");
		slowSay("��", 0);
		colorful("narrator");
		slowSay("���", 0);
		if (crit <= e_critrate / 100.0)
		{
			slowSayint(e_critdam);
			slowSay("�㱩���˺�\n");
			p_hp -= e_critdam;
		}
		else
		{
			slowSayint(e_dam);
			slowSay("���˺�\n");
			p_hp -= e_dam;
		}
		
		if (p_hp <= 0)
		{
			slowSay("������");
			getch();
			return LOSE;
		}
		
		colorful("player");
		slowSay("��", 0);
		colorful("narrator");
		slowSay("��ʣ", 0);
		slowSayint(p_hp); 
		slowSay("��Ѫ��\n");
		
		cout << "�����������" << endl; 
		getch();
		system("cls");
	}
}
