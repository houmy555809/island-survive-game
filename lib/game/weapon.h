//#include "../utils/utils.h"
void newWeapon(string name)
{
	if (name == "���ֳ���")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� ���ֳ��� ��" << endl;
		cout << "��      Ʒ�ף� ��ͨ     ��" << endl;
		cout << "��      �˺��� 15       ��" << endl;
		cout << "��    �����ʣ� 5%       ��" << endl;
		cout << "��  �����˺��� 30       ��" << endl;
		cout << "��  �������ԣ� ��       ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "�߼�����")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� �߼����� ��" << endl;
		cout << "��      Ʒ�ף� ����     ��" << endl;
		cout << "��      �˺��� 30       ��" << endl;
		cout << "��    �����ʣ� 10%      ��" << endl;
		cout << "��  �����˺��� 50       ��" << endl;
		cout << "��  �������ԣ� ��       ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "�ƾ���")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� �ƾ���   ��" << endl;
		cout << "��  ����ʵ����˳���ģ�  ��" << endl;
		cout << "��      Ʒ�ף� ����     ��" << endl;
		cout << "��      �˺��� 5        ��" << endl;
		cout << "��    �����ʣ� 5%       ��" << endl;
		cout << "��  �����˺��� 30       ��" << endl;
		cout << "��  �������ԣ� ȼ�ո��� ��" << endl;
		cout << "��             20% ��5   ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "��ǹ")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� ��ǹ     ��" << endl;
		cout << "��      Ʒ�ף� ����     ��" << endl;
		cout << "��      �˺��� 25       ��" << endl;
		cout << "��    �����ʣ� 5%       ��" << endl;
		cout << "��  �����˺��� 100      ��" << endl;
		cout << "��  �������ԣ� ��       ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "�󿳵�")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� �󿳵�   ��" << endl;
		cout << "��   ����3����۹��ɣ�  ��" << endl;
		cout << "��      Ʒ�ף� ����     ��" << endl;
		cout << "��      �˺��� 20       ��" << endl;
		cout << "��    �����ʣ� 50%      ��" << endl;
		cout << "��  �����˺��� 40       ��" << endl;
		cout << "��  �������ԣ� ��       ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "����֮��")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0e);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� ����֮�� ��" << endl;
		cout << "��      Ʒ�ף� ��     ��" << endl;
		cout << "��      �˺���  0       ��" << endl;
		cout << "��    �����ʣ� 100%     ��" << endl;
		cout << "��  �����˺��� +INF     ��" << endl;
		cout << "��  �������ԣ� ��ɱһ�� ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "�����ؽ�")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� �����ؽ� ��" << endl;
		cout << "��      Ʒ�ף� ��     ��" << endl;
		cout << "��      �˺��� 100      ��" << endl;
		cout << "��    �����ʣ� 50%      ��" << endl;
		cout << "��  �����˺��� 250      ��" << endl;
		cout << "��  �������ԣ� ȼ�ո��� ��" << endl;
		cout << "��             50% ��6  ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "��˪����")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� ��˪���� ��" << endl;
		cout << "��      Ʒ�ף� ��     ��" << endl;
		cout << "��      �˺��� 100      ��" << endl;
		cout << "��    �����ʣ� 50%      ��" << endl;
		cout << "��  �����˺��� 250      ��" << endl;
		cout << "��  �������ԣ� �������� ��" << endl;
		cout << "��             150%     ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "�綾����")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0d);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� �綾���� ��" << endl;
		cout << "��      Ʒ�ף� ��     ��" << endl;
		cout << "��      �˺��� 100      ��" << endl;
		cout << "��    �����ʣ� 50%      ��" << endl;
		cout << "��  �����˺��� 250      ��" << endl;
		cout << "��  �������ԣ� �����˺� ��" << endl;
		cout << "��             350%     ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
	if (name == "������ì")
	{
		Sleep(500);
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0a);
		cout << "��----------------------��" << endl;
		cout << "��  �������ƣ� ������ì ��" << endl;
		cout << "��      Ʒ�ף� ��     ��" << endl;
		cout << "��      �˺��� 100      ��" << endl;
		cout << "��    �����ʣ� 50%      ��" << endl;
		cout << "��  �����˺��� 250      ��" << endl;
		cout << "��  �������ԣ� ������ȡ ��" << endl;
		cout << "��             50%     ��" << endl;
		cout << "��----------------------��" << endl;
		char ch;
		slowSay("�Ƿ������(y/n)");
		cin << ch;
		while (ch != 'n' && ch != 'y')
		{
			cout << "����������" << endl;
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
