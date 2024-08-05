bool check_for_saves(){
	return fopen("saves.txt","r")!=NULL;
}
void load(){
	if(!check_for_saves())return;
	colorful("system");
	slowSay("检测到您有存档，是否加载？(y/n)");
	char ch=getch();
	while(ch!='y'&&ch!='n')ch=getch();
	if(ch=='n')return;
	slowSay("正在加载中......");
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
	slowSay("加载完毕");
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
