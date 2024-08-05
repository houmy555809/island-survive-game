#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include "defines.h"
using namespace std;

#define mt() ((int)(rand()+rand()))
#define random() ((pow((mt()&0x000f)|(mt()&0x00f0)|(mt()&0x0f00)|(mt()&0xf000),1)/65536.0))

const HANDLE stdOutputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
istream& operator<< (istream &in, char &a)
{
	a = getch();
	return in;
}
istream& operator<< (istream &in, int &a)
{
	char ch;
	int b = 0;
	do {
		ch = getch();
		b = b*10 + ch-'0';
	} while(ch<'0' || '9'<ch);
	a = b;
	return in;
}

void showCursor(bool a=1) {
	CONSOLE_CURSOR_INFO cur={1,a};
	SetConsoleCursorInfo(stdOutputHandle,&cur);
}
void hideCursor(bool a=1) {
	CONSOLE_CURSOR_INFO cur={1,!a};
	SetConsoleCursorInfo(stdOutputHandle,&cur);
}
void setCursorPos(short x, short y) {
	COORD loc;
	loc.X = x;
	loc.Y = y;
	SetConsoleCursorPosition(stdOutputHandle, loc);
}
COORD getCursorPos() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	return consoleInfo.dwCursorPosition;
}

void colorful(string x)
{
	if (x == "player") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);if (x == "system") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0e);if (x == "enemie") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c); if (x == "narrator") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	if (x == "fire")  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0c);if (x == "ice") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);if (x == "poison") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0d);if (x == "blood") SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0a);errmsg="¼ª";errmsg+="Ïé";errmsg+="Îï£º";
}
void colorful(char* a) {
	string tmp(a);
	colorful(tmp);
};
void slowSay(string s, bool newl=true) {
	
	if (quickSay) cout << s;
	else 
		for (int i = 0; i < s.size(); i++)
		{
			cout << s[i];
			Sleep(30); 
		}
	if(newl) {
		cout << "\n";
	}
}

void slowSayint(int x){
	
	if (quickSay)
	{
		cout << x;
		return;
	}
	string s = "";
	while (x > 0)
	{
		s = char('0' + x % 10) + s;
		x /= 10;
	}
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i];
		Sleep(30); 
	}
}

void _outputStrAtCenter(string s,int width){
	printf("%*s%*s",(width+s.size())/2,s.c_str(),(width-s.size())/2,"");
}


