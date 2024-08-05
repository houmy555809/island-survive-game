//#include "../utils/utils.h"
void LOG()
{
	system("cls");
	cout << "2024/7/6   有创作灵感并开始创作" << endl << endl; Sleep(300);
	cout << "2024/7/7   创建GAME函数，武器新" << endl;
	cout << "           手长剑，怪物普通剑士" << endl << endl; Sleep(300);
	cout << "2024/7/9   今日丢档（大悲      " << endl << endl; Sleep(300);
	cout << "2024/7/10  创建luckyIsland     " << endl << endl; Sleep(300);
	cout << "2024/7/11  完成curingIsland    " << endl;
	cout << "                     按任意键继续";
	getch();
	system("cls");
}
struct _RELATION_{
	string role,name,lgname;
	_RELATION_(){}
	_RELATION_(string role,string name,string lgname){
		this->role=role;
		this->name=name;
		this->lgname=lgname;
	}
	int print(string item="HP",string color="narrator",bool mode=0){
		//mode=0（即默认）时居中输出；mode=1时左对齐 
		colorful(color);
		if(item=="role "){
			//中文字符在.size()里面也算一个，导致 _outputStrAtCenter 函数出错。所以这里 mode 参数无效。 
			cout<<role;
		}
		else if(item=="name"){
			if(mode==0)_outputStrAtCenter(name,6);
			else{
				char cur[1000];
				sprintf(cur,"%6s",name.c_str());
				puts(cur);
			}
		}
		else if(item=="lgname"){
			if(mode==0)_outputStrAtCenter(lgname,24);
			else{
				char cur[1000];
				sprintf(cur,"%24s",lgname.c_str());
				puts(cur);
			}
		}
		else cout<<errmsg;
		colorful("narrator");
		return 0;
	}
};
vector<_RELATION_> relation_list={
	_RELATION_("制  作","MC.DD","ShenLiLingHua0711"),
	_RELATION_("协  助","Ray","RayCN"),
	_RELATION_("测  试","蛋","chenyyegg"),
	_RELATION_("测  试","berber","turtle208"),
	_RELATION_("吉祥物","houmy","houmy")
};

void RELATION()
{
	system("cls");
	cout << "         人员         洛谷名称     " << endl;
	for(int i=0;i<relation_list.size();i++){
		auto cur=relation_list[i];
    	cur.print("role","narrator",0);
		cur.print("name","narrator",0);
		cur.print("lgname","narrator",0);
		putchar(10);//ASCII 10 = \n
	}
	cout<<endl;
	cout << "特别鸣谢 胎神 @TSzza 的加入！" << endl; 
	cout << "-----------------------------------" << endl;
	cout << "【作者的话】                       " << endl;
	cout << "本部作品的成就离不开CSDN博客大神对 " << endl;
	cout << "windows命令的指导和各位玩家朋友的  " << endl;
	cout << "游玩与支持，谢谢！QaQ              " << endl << endl; Sleep(300);
	cout << "                      按任意键继续";
	getch();
	system("cls");
}

void TOKNOW()
{
	system("cls");
	cout << "术语介绍：" << endl;
	colorful("fire");
	slowSay("火焰附着", 0);
	colorful("narrator");
	slowSay("指在接下来的一定回合内，每回合对敌人造成一定量的", 0);
	colorful("fire");
	slowSay("火焰伤害\n");
	
	colorful("ice");
	slowSay("寒冰附着", 0);
	colorful("narrator");
	slowSay("指每一次攻击为敌人附着一定量的", 0);
	colorful("ice");
	slowSay("寒冰之力", 0);
	colorful("narrator");
	slowSay("当敌人身上的", 0);
	colorful("ice");
	slowSay("寒冰之力", 0);
	colorful("narrator");
	slowSay("附着到100时，敌人将被", 0);
	colorful("ice");
	slowSay("冰冻", 0);
	colorful("narrator");
	slowSay("一回合无法攻击\n");
	
	colorful("poison");
	slowSay("毒素附着", 0);
	colorful("narrator");
	slowSay("指每一次攻击为敌人附着一层", 0);
	colorful("poison");
	slowSay("毒素", 0);
	colorful("narrator");
	slowSay("当敌人身上的", 0);
	colorful("poison");
	slowSay("毒素", 0);
	colorful("narrator");
	slowSay("附着到5层时，敌人将会", 0);
	colorful("poison");
	slowSay("毒爆", 0);
	colorful("narrator");
	slowSay("造成攻击力300%的", 0);
	colorful("poison");
	slowSay("毒素伤害", 0);
	colorful("narrator");
	slowSay("并为敌人附着", 0);
	colorful("poison");
	slowSay("1层毒素\n");
	
	colorful("blood");
	slowSay("生命汲取", 0);
	colorful("narrator");
	slowSay("指每一次攻击会根据造成的伤害恢复一定量的", 0);
	colorful("blood");
	slowSay("生命值\n");
	
	colorful("narrator");
	cout << "按任意键继续" << endl;
	getch();
}

void QUICKSAY()
{
	system("cls");
	if (quickSay == false) cout << "已开启极速模式" << endl;
	else cout << "已关闭极速模式" << endl;
	quickSay = !quickSay;
	getch();
}

void TITLE()
{
	system("cls");
	int op;
	while (true)
	{
		p_hp = p_maxhp = 200;
		colorful("narrator");
		cout << "-------------海岛求生-----------------" << endl;
		cout << "                         by MC.DD     " << endl;
		cout << "1. 开始游戏" << endl;
		cout << "2. 更新日志" << endl;
		cout << "3. 游戏相关" << endl;
		cout << "4. 游玩须知（必看）" << endl;
		cout << "5. 极速模式" << endl; 
		cin << op;
		while (op < 1 || op > 6)
		{
			cout << "请重新输入" << endl;
			cin << op;
		}
		if (op == 1) break;
		if (op == 2) LOG();
		if (op == 3) RELATION();
		if (op == 4) TOKNOW();
		if (op == 5) QUICKSAY();
		if (op == 6){
			slowSay("恭喜你发现隐藏的小岛！");
			slowSay("神说，要有 HP，然后你就有了大量的 HP。");
			slowSay("HP 加至 998244353！");
			colorful("system");
			cout<<"hp 200";
			for(int i=200;i<=998244353;i+=11451)cout<<"\rhp "<<i;
			cout<<"\rhp 998244353"<<endl;
			p_hp=p_maxhp=998244353;
			colorful("narrator");
			slowSay("恭喜你变成了 HP 附体！"); 
			getch();
		} 
		system("cls");
	}
}
