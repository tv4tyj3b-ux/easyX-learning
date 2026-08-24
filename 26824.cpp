#define _CRT_SECURE_NO_WARNINGS
#include <easyx.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cmath>
#include <tchar.h>
#include <cstdbool>
#include <time.h>


//今天学清屏、双缓冲、帧率控制
int main() {
	initgraph(900, 600, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	setbkmode(TRANSPARENT);
	cleardevice();

	//fps 60
	const clock_t FPS = 1000 / 60;
	int starttime = 0;
	int frametime = 0;

	int score = 0;
	char str[50] = "";
	while (true) {
		starttime = clock();

		sprintf(str, "score:%d", score++);
		settextcolor(BLACK);
		//双缓冲
		BeginBatchDraw();
		cleardevice();
		outtextxy(50, 50, str);
		EndBatchDraw();
		
		frametime = clock() - starttime;
		if (frametime > 0) {
			Sleep(FPS - frametime);
		}
	}
	return 0;
}