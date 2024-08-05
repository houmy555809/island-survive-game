//#include "../utils/utils.h"
void newWeapon(string name)
{
	if (name == "新手长剑")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 新手长剑 ┆" << endl;
		cout << "┆      品阶： 普通     ┆" << endl;
		cout << "┆      伤害： 15       ┆" << endl;
		cout << "┆    暴击率： 5%       ┆" << endl;
		cout << "┆  暴击伤害： 30       ┆" << endl;
		cout << "┆  附加属性： 无       ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 15;
			p_critrate = 5;
			p_critdam = 30;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "高级长剑")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 高级长剑 ┆" << endl;
		cout << "┆      品阶： 进阶     ┆" << endl;
		cout << "┆      伤害： 30       ┆" << endl;
		cout << "┆    暴击率： 10%      ┆" << endl;
		cout << "┆  暴击伤害： 50       ┆" << endl;
		cout << "┆  附加属性： 无       ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 30;
			p_critrate = 10;
			p_critdam = 50;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "酒精灯")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 酒精灯   ┆" << endl;
		cout << "┆  （从实验室顺来的）  ┆" << endl;
		cout << "┆      品阶： 进阶     ┆" << endl;
		cout << "┆      伤害： 5        ┆" << endl;
		cout << "┆    暴击率： 5%       ┆" << endl;
		cout << "┆  暴击伤害： 30       ┆" << endl;
		cout << "┆  附加属性： 燃烧附着 ┆" << endl;
		cout << "┆             20% ×5   ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 5;
			p_critrate = 5;
			p_critdam = 30;
			p_firedam = 20;
			p_firetime = 5;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "手枪")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 手枪     ┆" << endl;
		cout << "┆      品阶： 进阶     ┆" << endl;
		cout << "┆      伤害： 25       ┆" << endl;
		cout << "┆    暴击率： 5%       ┆" << endl;
		cout << "┆  暴击伤害： 100      ┆" << endl;
		cout << "┆  附加属性： 无       ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 25;
			p_critrate = 5;
			p_critdam = 100;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "大砍刀")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 大砍刀   ┆" << endl;
		cout << "┆   （由3个大臂构成）  ┆" << endl;
		cout << "┆      品阶： 进阶     ┆" << endl;
		cout << "┆      伤害： 20       ┆" << endl;
		cout << "┆    暴击率： 50%      ┆" << endl;
		cout << "┆  暴击伤害： 40       ┆" << endl;
		cout << "┆  附加属性： 无       ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 20;
			p_critrate = 50;
			p_critdam = 40;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "创世之剑")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0e);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 创世之剑 ┆" << endl;
		cout << "┆      品阶： 神话     ┆" << endl;
		cout << "┆      伤害：  0       ┆" << endl;
		cout << "┆    暴击率： 100%     ┆" << endl;
		cout << "┆  暴击伤害： +INF     ┆" << endl;
		cout << "┆  附加属性： 秒杀一切 ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 0;
			p_critrate = 100;
			p_critdam = 2147483647;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "龙焰重剑")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 龙焰重剑 ┆" << endl;
		cout << "┆      品阶： 神话     ┆" << endl;
		cout << "┆      伤害： 100      ┆" << endl;
		cout << "┆    暴击率： 50%      ┆" << endl;
		cout << "┆  暴击伤害： 250      ┆" << endl;
		cout << "┆  附加属性： 燃烧附着 ┆" << endl;
		cout << "┆             50% ×6  ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 100;
			p_critrate = 50;
			p_critdam = 250;
			p_firedam = 50;
			p_firetime = 6;
			p_ice = 0;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "冰霜长弓")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 冰霜长弓 ┆" << endl;
		cout << "┆      品阶： 神话     ┆" << endl;
		cout << "┆      伤害： 100      ┆" << endl;
		cout << "┆    暴击率： 50%      ┆" << endl;
		cout << "┆  暴击伤害： 250      ┆" << endl;
		cout << "┆  附加属性： 寒冰附着 ┆" << endl;
		cout << "┆             150%     ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 100;
			p_critrate = 50;
			p_critdam = 250;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 150;
			p_poison = 0;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "剧毒法书")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0d);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 剧毒法书 ┆" << endl;
		cout << "┆      品阶： 神话     ┆" << endl;
		cout << "┆      伤害： 100      ┆" << endl;
		cout << "┆    暴击率： 50%      ┆" << endl;
		cout << "┆  暴击伤害： 250      ┆" << endl;
		cout << "┆  附加属性： 毒爆伤害 ┆" << endl;
		cout << "┆             350%     ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 100;
			p_critrate = 50;
			p_critdam = 250;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 350;
			p_blood = 0;
		}
		getch();
		system("cls");
	}
	if (name == "生命长矛")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0a);
		cout << "┌----------------------┐" << endl;
		cout << "┆  武器名称： 生命长矛 ┆" << endl;
		cout << "┆      品阶： 神话     ┆" << endl;
		cout << "┆      伤害： 100      ┆" << endl;
		cout << "┆    暴击率： 50%      ┆" << endl;
		cout << "┆  暴击伤害： 250      ┆" << endl;
		cout << "┆  附加属性： 生命汲取 ┆" << endl;
		cout << "┆             50%     ┆" << endl;
		cout << "└----------------------┘" << endl;
		char ch;
		slowSay("是否更换？(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "请重新输入" << endl;
			cin << ch; 
		}
		if (ch == 'y')
		{
			p_dam = 100;
			p_critrate = 50;
			p_critdam = 250;
			p_firedam = 0;
			p_firetime = 0;
			p_ice = 0;
			p_poison = 0; 
			p_blood = 50;
		}
		getch();
		system("cls");
	}
}
