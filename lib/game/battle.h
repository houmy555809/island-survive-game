//#include "../utils/utils.h"
#include "enemy.h" 
enum BATTLE_RESULT {
	WIN, LOSE
};
int BATTLE(string name)
{
	loadEnemie(name);
	system("cls");
	cout << "----------开始战斗----------" << endl; 
	int round = 0;
	while (true)
	{
		cout << "第" << ++round << "回合" << endl;
		float crit = random();
		colorful("player");
		slowSay("你", 0);
		colorful("narrator");
		slowSay("发动攻击对", 0);
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("造成", 0);
		if (crit <= p_critrate / 100.0)
		{
			slowSayint(p_critdam);
			slowSay("点暴击伤害\n");
			e_hp -= p_critdam;
		}
		else
		{
			slowSayint(p_dam);
			slowSay("点伤害\n");
			e_hp -= p_dam;
		}
		e_firetime += p_firetime;
		if (--e_firetime >= 0 && !e_antifire)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("fire");
			slowSay("燃烧", 0);
			colorful("narrator");
			slowSay("造成", 0);
			colorful("fire");
			slowSayint(p_firedam);
			slowSay("点火焰伤害");
			e_hp -= p_firedam;
		}
		
		if (p_poison > 0) e_poison++;
		if (e_poison == 5 && !e_antipoison)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("身上的", 0);
			colorful("poison");
			slowSay("毒素", 0);
			colorful("narrator");
			slowSay("累积到5层，产生", 0);
			colorful("poison");
			slowSay("毒爆", 0);
			colorful("narrator");
			slowSay("造成", 0);
			colorful("posion");
			slowSayint(p_poison);
			slowSay("点毒素伤害");
		}
		
		if (p_blood > 0 && !e_antiblood)
		{
			colorful("player");
			slowSay("你", 0);
			colorful("narrator");
			slowSay("汲取", 0);
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("的生命并", 0);
			colorful("blood");
			slowSay("恢复", 0);
			slowSayint(p_blood);
			slowSay("点血量");
		}
		
		e_ice += p_ice;
		e_frozen += e_ice / 100;
		e_ice %= 100;
		if (--e_frozen >= 0 && !e_antiice)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("身上的", 0);
			colorful("ice");
			slowSay("寒冰之力", 0);
			colorful("narrator");
			slowSay("累积到100，被", 0);
			colorful("ice");
			slowSay("冰冻", 0);
		}
		
		if (e_hp <= 0) {
			slowSay("你赢了");
			getch();
			return WIN;
		}
		
		if (e_frozen >= 0 && !e_antiice)
		{
			colorful("enemie");
			slowSay(name, 0);
			colorful("narrator");
			slowSay("被", 0);
			colorful("ice");
			slowSay("冰冻", 0);
			colorful("narrator");
			slowSay("无法攻击");
			cout << "按任意键继续" << endl; 
			getch();
			system("cls");
		}
		
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("还剩", 0);
		slowSayint(e_hp); 
		slowSay("点血量\n");
		
		
		crit = random();
		colorful("enemie");
		slowSay(name, 0);
		colorful("narrator");
		slowSay("发动攻击对", 0);
		colorful("player");
		slowSay("你", 0);
		colorful("narrator");
		slowSay("造成", 0);
		if (crit <= e_critrate / 100.0)
		{
			slowSayint(e_critdam);
			slowSay("点暴击伤害\n");
			p_hp -= e_critdam;
		}
		else
		{
			slowSayint(e_dam);
			slowSay("点伤害\n");
			p_hp -= e_dam;
		}
		
		if (p_hp <= 0)
		{
			slowSay("你死了");
			getch();
			return LOSE;
		}
		
		colorful("player");
		slowSay("你", 0);
		colorful("narrator");
		slowSay("还剩", 0);
		slowSayint(p_hp); 
		slowSay("点血量\n");
		
		cout << "按任意键继续" << endl; 
		getch();
		system("cls");
	}
}
