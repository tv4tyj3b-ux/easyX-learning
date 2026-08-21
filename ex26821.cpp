#define _CRT_SECURE_NO_WARNINGS
#include <easyx.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cmath>
#include <tchar.h>
#include <cstdbool>
ExMessage msg = { 0 };
//判断是否在区间内
bool inarea(int mx, int my, int x, int y, int w, int h) {
	if (mx > x && mx <x + w && my>y && my < y + h) {
		return true;
	}
	return false;
}

bool buttom(int x,int y,int w,int h,const char* text) {
	//绘制按钮
	if (inarea(msg.x, msg.y, x, y, w, h)) {
		setfillcolor(BLACK);
	}else{
		setfillcolor(BLUE);
	}
	fillroundrect(x, y, x + w, y + h, 4, 5);
	//绘制按钮文本
	setbkmode(TRANSPARENT);
	/*settextcolor(BLACK);*/
	int hspace = (w - textwidth(text)) / 2;
	int wspace = (h - textheight(text)) / 2;
	outtextxy(x + hspace, y + wspace, text);
	//判断按钮是否被点击
	if (msg.message == WM_LBUTTONDOWN && inarea(msg.x,msg.y,x,y,w,h)) {
		return true;
	}else{
		return false;
	}
}

int main() {

	initgraph(900, 600, EX_SHOWCONSOLE|EX_DBLCLKS);
	setbkcolor(WHITE);
	cleardevice();

	while(true){
		if (peekmessage(&msg, EX_MOUSE)) {

		}
		//双缓冲绘图，图像函数必须在begin和end之间
		BeginBatchDraw();
		if (buttom(20, 20, 150, 35, "start game")) {
			printf("start game\n");
		}
		if (buttom(20, 100, 150, 35, "end game")) {
			printf("end game\n");
		}
		EndBatchDraw();
		//清空鼠标消息量
		msg.message = 0;
	}
	getchar();
	return 0;
}