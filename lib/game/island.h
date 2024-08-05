//#include "../utils/utils.h"
void luckyIsland()
{
	colorful("narrator");
	slowSay("��Ȼ�����ҵ������ˣ�����������ߵĵ�\n");
	slowSay("���ˣ��������ˣ�������������ɡ�\n");
	float weapon = random();
	if (0 / 5.0 <= weapon && weapon < 1 / 5.0) newWeapon("����֮��");
	if (1 / 5.0 <= weapon && weapon < 2 / 5.0) newWeapon("�����ؽ�");
	if (2 / 5.0 <= weapon && weapon < 3 / 5.0) newWeapon("��˪����");
	if (3 / 5.0 <= weapon && weapon < 4 / 5.0) newWeapon("�綾����");
	if (4 / 5.0 <= weapon && weapon < 5 / 5.0) newWeapon("������ì"); 
}

void deathIsland()
{
	colorful("enemie");
	slowSay("��С�����డ�����Ȼ�Ҵ����ҵ���أ���ֱ��������");
	colorful("player");
	slowSay("����˭��");
	colorful("enemie");
	slowSay("�����㶼��֪��");
	slowSay("�ҿ���ΰ���", 0); 
	float dragon = random();
	if (0 / 5.0 <= dragon && dragon < 1 / 5.0) slowSay("��������"), BATTLE("��������");
	if (1 / 5.0 <= dragon && dragon < 2 / 5.0) slowSay("����а��"), BATTLE("����а��");
	if (2 / 5.0 <= dragon && dragon < 3 / 5.0) slowSay("˪��ħ��"), BATTLE("˪��ħ��");
	if (3 / 5.0 <= dragon && dragon < 4 / 5.0) slowSay("�ֶ�а��"), BATTLE("�ֶ�а��");
	if (4 / 5.0 <= dragon && dragon < 5 / 5.0) slowSay("��Ѫ����"), BATTLE("��Ѫ����");
	
	
}

void finishIsland()
{
	colorful("player");
	slowSay("ǰ���Ǵ�½���ҿ��Իؼ���!");
	colorful("system");
	slowSay("����⵽�����ѷ��ִ�½��");
	slowSay("�Ƿ񷵺���y/n��");
	char op;
	cin << op;
	while (op != 'y' && op != 'n')
	{
		cout << "����������" << endl;
		cin << op;
	}
	if (op == 'y') slowSay("�𾴵�ð���ߣ���ϲ��ɹ����ش�½����Ϸ����"), exit(0);
}

void battleIsland()
{
	colorful("narrator");
	slowSay("���С�����кܶ����ͨ��ʿ�ͺܶ�û����ô��ͨ�Ľ�ʿ��");
	slowSay("������Ѳ����㡣");
	float type=random();
	if(type<2.0/3){
		BATTLE("��ͨ��ʿ");
	}else{
		BATTLE("�߼���ʿ");
	}
	colorful("narrator");
	slowSay("�������������");
}

void weaponIsland()
{
	colorful("narrator");
	slowSay("���С������һ��������һ����ѧʵ���ң���");
	slowSay("�����ȡһЩ������ף��ث�ˣ�");
	float weapon=random();
	if(weapon<1.0/4){
		newWeapon("�߼�����");
	}else if(weapon<2.0/4){
		newWeapon("�ƾ���");
	}else if(weapon<3.0/4){
		newWeapon("��ǹ");
	}else newWeapon("�󿳵�");
	colorful("narrator");
	slowSay("�����ɣ�");
}

void curingIsland()
{
	colorful("narrator");
	slowSay("���С������һ�����Ʒ�������ĵ���ַ");
	slowSay("ò���������һЩҽ�Ƶ㡣");
	colorful("system"); 
	float medicine = random();
	if (0 / 6.0 <= medicine && medicine < 3 / 6.0)
	{
		slowSay("����⵽С��ҽ�ư����ɻظ�50��Ѫ����");
		slowSay("�Ƿ�ʹ�ã�y/n��");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "����������" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_hp = min(p_hp + 50, p_maxhp);
			slowSay("��Ϊð���߻ظ�", 0);
			colorful("blood");
			slowSay("50��Ѫ��");
			slowSay("��ǰѪ��", 0);
			slowSayint(p_hp); 
		}
	}
	if (3 / 6.0 <= medicine && medicine < 5 / 6.0)
	{
		slowSay("����⵽����ҽ�ư����ɻظ�150��Ѫ����");
		slowSay("�Ƿ�ʹ�ã�y/n��");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "����������" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_hp = min(p_hp + 150, p_maxhp);
			slowSay("��Ϊð���߻ظ�", 0);
			colorful("blood");
			slowSay("150��Ѫ��");
			slowSay("��ǰѪ��", 0);
			slowSayint(p_hp); 
		}
	}
	if (5 / 6.0 <= medicine && medicine < 6 / 6.0)
	{
		slowSay("����⵽����ǿ������������100���������ޣ����ָ�����");
		slowSay("�Ƿ�ʹ�ã�y/n��");
		char op;
		cin << op;
		while (op != 'y' && op != 'n')
		{
			cout << "����������" << endl;
			cin << op;
		}
		if (op == 'y')
		{
			p_maxhp += 100;
			p_hp = p_maxhp; 
			slowSay("��Ϊð��������", 0);
			colorful("blood");
			slowSay("100����������");
			colorful("system");
			slowSay("���ָ���");
			slowSay("��ǰѪ��", 0);
			slowSayint(p_hp); 
		}
	}
	cout << "�����������" << endl;
	getch();
}
