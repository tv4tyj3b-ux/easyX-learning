#define _CRT_SECURE_NO_WARNINGS
#include <easyx.h>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <cmath>
#include <tchar.h>
#include <cstdbool>
#include <time.h>


int main() {
	initgraph(900, 600, EX_SHOWCONSOLE);
	setbkcolor(WHITE);
	setbkmode(TRANSPARENT);
	cleardevice();

	const int framedelay = 1000 / 60;
	int framestart = 0;
	int frametime = 0;
	int speed = 300;

	IMAGE img_sheet;
	loadimage(&img_sheet, "assets/Idle.png");
	int index = 0;
	int imgsize = 64;
	int frames = 9;

	while (true) {
		framestart = clock();
		BeginBatchDraw;
		cleardevice();
		putimage(150, 150, imgsize, imgsize, &img_sheet, index * imgsize, 0);
		EndBatchDraw();

		//index = (index + 1) % 9;
		index = (clock() / speed) % frames;

		frametime = clock() - framestart;
		if (framedelay - frametime > 0) {
			Sleep(framedelay - frametime);
		}
	}

	getchar();
}