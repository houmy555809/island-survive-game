//#include "../utils/utils.h"
void loadEnemie(string name)
{
	if (name == "��ͨ��ʿ")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ���ͨ��ʿ   ��" << endl;
		cout << "��      Ѫ����  100      ��" << endl;
		cout << "��      �˺���   10      ��" << endl;
		cout << "��    �����ʣ�   3%      ��" << endl;
		cout << "��    �����˺��� 15      ��" << endl;
		cout << "��    �������ԣ� ��      ��" << endl;
		cout << "��-----------------------��" << endl;
		e_hp = 100;
		e_dam = 10;
		e_critrate = 3;
		e_critdam = 15;
	}
	if (name == "�߼���ʿ")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ��߼���ʿ   ��" << endl;
		cout << "��      Ѫ����  100      ��" << endl;
		cout << "��      �˺���   20      ��" << endl;
		cout << "��    �����ʣ�   5%      ��" << endl;
		cout << "��    �����˺��� 25      ��" << endl;
		cout << "��    �������ԣ� ��      ��" << endl;
		cout << "��-----------------------��" << endl;
		e_hp = 100;
		e_dam = 20;
		e_critrate = 5;
		e_critdam = 25;
	}
	if (name == "��������")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0e);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ���������   ��" << endl;
		cout << "��      Ѫ����  +INF-1   ��" << endl;
		cout << "��      �˺���   0       ��" << endl;
		cout << "��    �����ʣ�  100%     ��" << endl;
		cout << "��    �����˺��� +INF    ��" << endl;
		cout << "��    �������ԣ���ɱһ�� ��" << endl;
		cout << "��-----------------------��" << endl;
		e_hp = 2147483646;
		e_dam = 0;
		e_critrate = 100;
		e_critdam = 2147483647;
		e_antifire = false;
		e_antiice = false;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "����а��")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ�����а��   ��" << endl;
		cout << "��      Ѫ����  500      ��" << endl;
		cout << "��      �˺���  200      ��" << endl;
		cout << "��    �����ʣ�  50%      ��" << endl;
		cout << "��    �����˺��� 250     ��" << endl;
		cout << "��    �������ԣ�����ȼ�� ��" << endl;		
		cout << "��-----------------------��" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = true;
		e_antiice = false;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "˪��ħ��")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ�˪��ħ��   ��" << endl;
		cout << "��      Ѫ����  500      ��" << endl;
		cout << "��      �˺���  200      ��" << endl;
		cout << "��    �����ʣ�  50%      ��" << endl;
		cout << "��    �����˺��� 250     ��" << endl;
		cout << "��    �������ԣ����߱��� ��" << endl;
		cout << "��-----------------------��" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = false;
		e_antiice = true;
		e_antipoison = false;
		e_antiblood = false;
	}
	if (name == "�ֶ�а��")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0d);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ��ֶ�а��   ��" << endl;
		cout << "��      Ѫ����  500      ��" << endl;
		cout << "��      �˺���  200      ��" << endl;
		cout << "��    �����ʣ�  50%      ��" << endl;
		cout << "��    �����˺��� 250     ��" << endl;
		cout << "��    �������ԣ����߶��� ��" << endl;
		cout << "��-----------------------��" << endl;
		e_hp = 500;
		e_dam = 200;
		e_critrate = 50;
		e_critdam = 250;
		e_antifire = false;
		e_antiice = false;
		e_antipoison =true;
		e_antiblood = false;
	}
	if (name == "��Ѫ����")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0f);
		cout << "��-----------------------��" << endl;
		cout << "��  �������ƣ���Ѫ����   ��" << endl;
		cout << "��      Ѫ����  500      ��" << endl;
		cout << "��      �˺���  200      ��" << endl;
		cout << "��    �����ʣ�  50%      ��" << endl;
		cout << "��    �����˺��� 250     ��" << endl;
		cout << "��    �������ԣ�������Ѫ ��" << endl;
		cout << "��-----------------------��" << endl;
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
