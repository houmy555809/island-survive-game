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
	slowSay("这里是哪里……啊！头好痛……\n");
	colorful("narrator");
	slowSay("你坐起来，猱了猱头，向四处望去。海风徐徐，海天一色，美轮美奂\n");
	slowSay("沙滩满地金黄，天空偶尔掠过一群海鸥，啼叫几声，随后一头扎入水中\n");
	colorful("player");
	slowSay("我……（咳咳）为什么……（咳咳）会在这里？\n");
	colorful("narrator");
	slowSay("你咳出呛到的海水，并吐在沙滩上。\n");
	slowSay("正在你茫然无措时，一只怪物突然跳到你的面前。\n");
	colorful("system");
	slowSay("『正在激活战斗系统』\n");
	slowSay("『正在为宿主发放武器』\n");
	if (quickSay) getch();
	newWeapon("新手长剑");
	colorful("player");
	slowSay("你是什么？\n");
	colorful("system");
	slowSay("没时间解释了，快攻击那只怪物\n");
	if (quickSay) getch();
	BATTLE("普通剑士");
	system("cls");
	colorful("system");
	slowSay("还不错嘛，继续你的冒险吧");
	cout << "按任意键继续" << endl;
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
			slowSay("『正在前往下一座岛屿』");
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
			slowSay("『已自动为您回复20点HP』");
			Sleep(500);
		}
		save();
	}
}
