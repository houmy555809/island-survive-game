//#include "../utils/utils.h"
void LOG()
{
	system("cls");
	cout << "2024/7/6   �д�����в���ʼ����" << endl << endl; Sleep(300);
	cout << "2024/7/7   ����GAME������������" << endl;
	cout << "           �ֳ�����������ͨ��ʿ" << endl << endl; Sleep(300);
	cout << "2024/7/9   ���ն�������      " << endl << endl; Sleep(300);
	cout << "2024/7/10  ����luckyIsland     " << endl << endl; Sleep(300);
	cout << "2024/7/11  ���curingIsland    " << endl;
	cout << "                     �����������";
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
		//mode=0����Ĭ�ϣ�ʱ���������mode=1ʱ����� 
		colorful(color);
		if(item=="role "){
			//�����ַ���.size()����Ҳ��һ�������� _outputStrAtCenter ���������������� mode ������Ч�� 
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
	_RELATION_("��  ��","MC.DD","ShenLiLingHua0711"),
	_RELATION_("Э  ��","Ray","RayCN"),
	_RELATION_("��  ��","��","chenyyegg"),
	_RELATION_("��  ��","berber","turtle208"),
	_RELATION_("������","houmy","houmy")
};

void RELATION()
{
	system("cls");
	cout << "         ��Ա         �������     " << endl;
	for(int i=0;i<relation_list.size();i++){
		auto cur=relation_list[i];
    	cur.print("role","narrator",0);
		cur.print("name","narrator",0);
		cur.print("lgname","narrator",0);
		putchar(10);//ASCII 10 = \n
	}
	cout<<endl;
	cout << "�ر���л ̥�� @TSzza �ļ��룡" << endl; 
	cout << "-----------------------------------" << endl;
	cout << "�����ߵĻ���                       " << endl;
	cout << "������Ʒ�ĳɾ��벻��CSDN���ʹ���� " << endl;
	cout << "windows�����ָ���͸�λ������ѵ�  " << endl;
	cout << "������֧�֣�лл��QaQ              " << endl << endl; Sleep(300);
	cout << "                      �����������";
	getch();
	system("cls");
}

void TOKNOW()
{
	system("cls");
	cout << "������ܣ�" << endl;
	colorful("fire");
	slowSay("���渽��", 0);
	colorful("narrator");
	slowSay("ָ�ڽ�������һ���غ��ڣ�ÿ�غ϶Ե������һ������", 0);
	colorful("fire");
	slowSay("�����˺�\n");
	
	colorful("ice");
	slowSay("��������", 0);
	colorful("narrator");
	slowSay("ָÿһ�ι���Ϊ���˸���һ������", 0);
	colorful("ice");
	slowSay("����֮��", 0);
	colorful("narrator");
	slowSay("���������ϵ�", 0);
	colorful("ice");
	slowSay("����֮��", 0);
	colorful("narrator");
	slowSay("���ŵ�100ʱ�����˽���", 0);
	colorful("ice");
	slowSay("����", 0);
	colorful("narrator");
	slowSay("һ�غ��޷�����\n");
	
	colorful("poison");
	slowSay("���ظ���", 0);
	colorful("narrator");
	slowSay("ָÿһ�ι���Ϊ���˸���һ��", 0);
	colorful("poison");
	slowSay("����", 0);
	colorful("narrator");
	slowSay("���������ϵ�", 0);
	colorful("poison");
	slowSay("����", 0);
	colorful("narrator");
	slowSay("���ŵ�5��ʱ�����˽���", 0);
	colorful("poison");
	slowSay("����", 0);
	colorful("narrator");
	slowSay("��ɹ�����300%��", 0);
	colorful("poison");
	slowSay("�����˺�", 0);
	colorful("narrator");
	slowSay("��Ϊ���˸���", 0);
	colorful("poison");
	slowSay("1�㶾��\n");
	
	colorful("blood");
	slowSay("������ȡ", 0);
	colorful("narrator");
	slowSay("ָÿһ�ι����������ɵ��˺��ָ�һ������", 0);
	colorful("blood");
	slowSay("����ֵ\n");
	
	colorful("narrator");
	cout << "�����������" << endl;
	getch();
}

void QUICKSAY()
{
	system("cls");
	if (quickSay == false) cout << "�ѿ�������ģʽ" << endl;
	else cout << "�ѹرռ���ģʽ" << endl;
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
		cout << "-------------��������-----------------" << endl;
		cout << "                         by MC.DD     " << endl;
		cout << "1. ��ʼ��Ϸ" << endl;
		cout << "2. ������־" << endl;
		cout << "3. ��Ϸ���" << endl;
		cout << "4. ������֪���ؿ���" << endl;
		cout << "5. ����ģʽ" << endl; 
		cin << op;
		while (op < 1 || op > 6)
		{
			cout << "����������" << endl;
			cin << op;
		}
		if (op == 1) break;
		if (op == 2) LOG();
		if (op == 3) RELATION();
		if (op == 4) TOKNOW();
		if (op == 5) QUICKSAY();
		if (op == 6){
			slowSay("��ϲ�㷢�����ص�С����");
			slowSay("��˵��Ҫ�� HP��Ȼ��������˴����� HP��");
			slowSay("HP ���� 998244353��");
			colorful("system");
			cout<<"hp 200";
			for(int i=200;i<=998244353;i+=11451)cout<<"\rhp "<<i;
			cout<<"\rhp 998244353"<<endl;
			p_hp=p_maxhp=998244353;
			colorful("narrator");
			slowSay("��ϲ������ HP ���壡"); 
			getch();
		} 
		system("cls");
	}
}
