//#include "../utils/utils.h"
void luckyIsland()
{
	colorful("narrator");
	slowSay("居然让你找到这里了，这里可是作者的岛\n");
	slowSay("算了，来都来了，就送你件宝贝吧。\n");
	float weapon = random();
	if (0 / 5.0 <= weapon && weapon < 1 / 5.0) newWeapon("创世之剑");
	if (1 / 5.0 <= weapon && weapon < 2 / 5.0) newWeapon("龙焰重剑");
	if (2 / 5.0 <= weapon && weapon < 3 / 5.0) newWeapon("冰霜长弓");
	if (3 / 5.0 <= weapon && weapon < 4 / 5.0) newWeapon("剧毒法书");
	if (4 / 5.0 <= weapon && weapon < 5 / 5.0) newWeapon("生命长矛"); 
}

void deathIsland()
{
	colorful("enemie");
	slowSay("弱小的人类啊！你居然敢闯入我的领地！简直是找死！");
	colorful("player");
	slowSay("你是谁？");
	colorful("enemie");
	slowSay("连我你都不知道");
	slowSay("我可是伟大的", 0); 
	float dragon = random();
	if (0 / 5.0 <= dragon && dragon < 1 / 5.0) slowSay("创世神龙"), BATTLE("创世神龙");
	if (1 / 5.0 <= dragon && dragon < 2 / 5.0) slowSay("狱火邪龙"), BATTLE("狱火邪龙");
	if (2 / 5.0 <= dragon && dragon < 3 / 5.0) slowSay("霜灭魔龙"), BATTLE("霜灭魔龙");
	if (3 / 5.0 <= dragon && dragon < 4 / 5.0) slowSay("阎毒邪龙"), BATTLE("阎毒邪龙");
	if (4 / 5.0 <= dragon && dragon < 5 / 5.0) slowSay("嗜血神龙"), BATTLE("嗜血神龙");
	
	
}

void finishIsland()
{
	colorful("player");
	slowSay("前面是大陆！我可以回家了!");
	colorful("system");
	slowSay("『检测到宿主已发现大陆』");
	slowSay("是否返航（y/n）");
	char op;
	cin << op;
	while (op != 'y' && op != 'n')
	{
		cout << "请重新输入" << endl;
		cin << op;
	}
	if (op == 'y') slowSay("尊敬的冒险者，恭喜你成功返回大陆，游戏结束"), exit(0);
}

void battleIsland()
{
	colorful("narrator");
	slowSay("这个小岛上有很多的普通剑士和很多没有那么普通的剑士。");
	slowSay("这绝对难不倒你。");
	float type=random();
	if(type<2.0/3){
		BATTLE("普通剑士");
	}else{
		BATTLE("高级剑士");
	}
	colorful("narrator");
	slowSay("还不错嘛，继续吧");
}

void weaponIsland()
{
	colorful("narrator");
	slowSay("这个小岛上有一个军火库和一个化学实验室（雾");
	slowSay("你可以取一些武器。祝你孬运！");
	float weapon=random();
	if(weapon<1.0/4){
		newWeapon("高级长剑");
	}else if(weapon<2.0/4){
		newWeapon("酒精灯");
	}else if(weapon<3.0/4){
		newWeapon("手枪");
	}else newWeapon("大砍刀");
	colorful("narrator");
	slowSay("继续吧！");
}

void curingIsland()
{
	colorful("narrator");
	slowSay("这个小岛上有一个看似废弃村落的的遗址");
	slowSay("貌似这里会有一些医疗点。");
	colorful("system"); 
	float medicine = random();
	if (0 / 6.0 <= medicine && medicine < 3 / 6.0)
	{
		slowSay("『检测到小型医疗包，可回复50点血量』");
		slowSay("是否使用（y/n）");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "请重新输入" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_hp = min(p_hp + 50, p_maxhp);
			slowSay("已为冒险者回复", 0);
			colorful("blood");
			slowSay("50点血量");
			slowSay("当前血量", 0);
			slowSayint(p_hp); 
		}
	}
	if (3 / 6.0 <= medicine && medicine < 5 / 6.0)
	{
		slowSay("『检测到大型医疗包，可回复150点血量』");
		slowSay("是否使用（y/n）");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "请重新输入" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_hp = min(p_hp + 150, p_maxhp);
			slowSay("已为冒险者回复", 0);
			colorful("blood");
			slowSay("150点血量");
			slowSay("当前血量", 0);
			slowSayint(p_hp); 
		}
	}
	if (5 / 6.0 <= medicine && medicine < 6 / 6.0)
	{
		slowSay("『检测到生命强化剂，可增加100点生命上限，并恢复满』");
		slowSay("是否使用（y/n）");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "请重新输入" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_maxhp += 100;
			p_hp = p_maxhp; 
			slowSay("已为冒险者增加", 0);
			colorful("blood");
			slowSay("100点生命上限");
			colorful("system");
			slowSay("并恢复满");
			slowSay("当前血量", 0);
			slowSayint(p_hp); 
		}
	}
	cout << "按任意键继续" << endl;
	getch();
}
