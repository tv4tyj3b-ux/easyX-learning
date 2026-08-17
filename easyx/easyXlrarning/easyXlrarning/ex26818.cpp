#define _CRT_SECURE_NO_WARNINGS
#include <easyx.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cmath>
#include <tchar.h>

void wordprint() {
	settextstyle(30, 20, _T("微软雅黑"));
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	outtextxy(15, 15, _T("hello easyX"));
	//关于为什么要在“”加_T():会出现2个重载中没有一个可以转换的字符串类型
	//easyx与字符串相关的函数，char、string，都有字符集问题，因为有两套并行的字符集，tchar和wchar
	//解决方法：
	//1.在字符串前面加L强制转换
	//2._T()或_TXET()这类带参宏把字符串包裹起来
	//3.菜单栏，项目，属性，高级，字符集，把Unicode改为多字节字符集
	int score = 60;
	char str[20] = "";
	sprintf(str, "acore:%d", score);
	//sprintf的作用就是将“”中的内容转换为char，并存放在第一个变量_buffer的char数组之中
	outtextxy(60, 60,str);
}

int main() {
	initgraph(900, 600,1);
	setbkcolor(WHITE);
	cleardevice();
	wordprint();
	getchar();
	return 0;
}