bool check_for_saves(){
	return fopen("saves.txt","r")!=NULL;
}
void load(){
	if(!check_for_saves())return;
	colorful("system");
	slowSay("��⵽���д浵���Ƿ���أ�(y/n)");
	char ch=getch();
	while(ch!='y'&&ch!='n')ch=getch();
	if(ch=='n')return;
	slowSay("���ڼ�����......");
	FILE *key=fopen("verify.txt","w");
	fprintf(key,"%d",time(0));
	fclose(key);
	system(".\\saves-encrypt.exe"); 
	FILE *f=fopen("saves.txt","r");
	fscanf(f,"%d%d%d%d%d%d%d%d%d%d",
		&p_hp,&p_maxhp,
		&p_dam,&p_critrate,&p_critdam,
		&p_firedam,&p_firetime,&p_ice,&p_poison,&p_blood,
		&quickSay);
	fclose(f);
	slowSay("�������");
	getch();
	colorful("narrator");
	system("cls");
}
void save(){
	FILE *key=fopen("verify.txt","w");
	fprintf(key,"%d",time(0));
	fclose(key);
	FILE *f=fopen("saves.txt","w");
	fprintf(f,"%d %d %d %d %d %d %d %d %d %d %d",
		p_hp,p_maxhp,
		p_dam,p_critrate,p_critdam,
		p_firedam,p_firetime,p_ice,p_poison,p_blood,
		quickSay);
	fclose(f);
	system(".\\saves-encrypt.exe"); 
}
