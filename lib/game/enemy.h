//#include "../utils/utils.h"
void loadEnemie(string name)
{
	if (name == "∆’Õ®Ω£ ø")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫∆’Õ®Ω£ ø   ©™" << endl;
		cout << "©™      —™¡ø£∫  100      ©™" << endl;
		cout << "©™      …À∫¶£∫   10      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫   3%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 15      ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫ Œﬁ      ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 100;
		e_dam = 10;
		e_critrate = 3;
		e_critdam = 15;
	}
	if (name == "∏ﬂº∂Ω£ ø")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫∏ﬂº∂Ω£ ø   ©™" << endl;
		cout << "©™      —™¡ø£∫  100      ©™" << endl;
		cout << "©™      …À∫¶£∫   20      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫   5%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 25      ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫ Œﬁ      ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 100;
		e_dam = 20;
		e_critrate = 5;
		e_critdam = 25;
	}
	if (name == "¥¥ ¿…Ò¡˙")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0e);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫¥¥ ¿…Ò¡˙   ©™" << endl;
		cout << "©™      —™¡ø£∫  +INF-1   ©™" << endl;
		cout << "©™      …À∫¶£∫   0       ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫  100%     ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ +INF    ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫√Î…±“ª«– ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 2147483646;
		e_dam = 0;
		e_critrate = 100;
		e_critdam = 2147483647;
		e_antifire = false;
		e_antiice = false;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "”¸ª–∞¡˙")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫”¸ª–∞¡˙   ©™" << endl;
		cout << "©™      —™¡ø£∫  500      ©™" << endl;
		cout << "©™      …À∫¶£∫  200      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫  50%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 250     ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫√‚“ﬂ»º…’ ©™" << endl;		
		cout << "©∏-----------------------©º" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = true;
		e_antiice = false;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "À™√ƒß¡˙")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫À™√ƒß¡˙   ©™" << endl;
		cout << "©™      —™¡ø£∫  500      ©™" << endl;
		cout << "©™      …À∫¶£∫  200      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫  50%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 250     ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫√‚“ﬂ±˘∂≥ ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = false;
		e_antiice = true;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "—÷∂æ–∞¡˙")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0d);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫—÷∂æ–∞¡˙   ©™" << endl;
		cout << "©™      —™¡ø£∫  500      ©™" << endl;
		cout << "©™      …À∫¶£∫  200      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫  50%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 250     ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫√‚“ﬂ∂æ…À ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = false;
		e_antiice = false;
		e_antipoison =true;
		e_antiblood = false;
	}
	if (name == " »—™…Ò¡˙")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0f);
		cout << "©∞-----------------------©¥" << endl;
		cout << "©™  µ–»À√˚≥∆£∫ »—™…Ò¡˙   ©™" << endl;
		cout << "©™      —™¡ø£∫  500      ©™" << endl;
		cout << "©™      …À∫¶£∫  200      ©™" << endl;
		cout << "©™    ±©ª˜¬ £∫  50%      ©™" << endl;
		cout << "©™    ±©ª˜…À∫¶£∫ 250     ©™" << endl;
		cout << "©™    ∏Ωº” Ù–‘£∫√‚“ﬂŒ¸—™ ©™" << endl;
		cout << "©∏-----------------------©º" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = false;
		e_antiice = false;
		e_antipoison =true;
		e_antiblood = false;
	}
	e_firetime = 0;
	e_ice = 0;
	e_frozen = 0;
	e_poison = 0;
	getch();
	system("cls");
}
