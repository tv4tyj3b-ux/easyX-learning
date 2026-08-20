#define _CRT_SECURE_NO_WARNINGS
#include <easyx.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cmath>
#include <tchar.h>
#include <cstdbool>



int main() {
	//设置窗口
	initgraph(900, 600, EX_SHOWCONSOLE | EX_DBLCLKS);
	setbkcolor(WHITE);
	cleardevice();
	//设置消息结构体变量
	ExMessage msg = { 0 };
	while (true) {
		//获取消息
		if (peekmessage(&msg, EX_MOUSE)) {
			switch (msg.message) {
			case WM_LBUTTONDOWN://左键按下
				printf("左键按下,pos(%d,%d)\n",msg.x,msg.y);//msgx和msgy是获取鼠标相对于窗口的位置
				break;
			case WM_RBUTTONDOWN://右键按下
				printf("右键按下,pos(%d,%d)\n", msg.x, msg.y);
				break;
			case WM_MBUTTONDOWN://中键按下
				printf("中键按下,dir(%d)\n", msg.wheel);//msgwheel是获取滚动方向,+是朝屏幕滚动，-是朝自己滚动
				break;
			case WM_MOUSEWHEEL://鼠标滚轮滚动
				printf("滚轮滚动,pos(%d,%d)\n");
				break;
			case WM_LBUTTONDBLCLK://左键双击
				printf("左键双击,pos(%d,%d)\n", msg.x, msg.y);
				break;
			case WM_MOUSEMOVE://鼠标移动
				printf("鼠标移动,pos(%d,%d)\n", msg.x, msg.y);
				break;
			}
		}
	}

	//防止程序退出
	getchar();
	return 0;
}