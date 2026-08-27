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
	initgraph(900,600,EX_SHOWCONSOLE);
	setbkcolor(BLACK);
	setbkmode(TRANSPARENT);
	cleardevice();

	IMAGE img_enemy[4];
	char path[100] = { 0 };
    for (int i = 0; i < 4; i++) {
		sprintf(path, "assets/images/enemy1_down%d.png", i + 1);
		loadimage(img_enemy + i, path);
	}
	const int framedelay = 1000 / 60;
	int framestart = 0;
	int frametime = 0;

	int index = 0;
	int speed = 300;
	int frames = 4;
	while (true) {
		framestart = clock();
		BeginBatchDraw;
		cleardevice();
		putimage(0, 0, img_enemy + index);
		EndBatchDraw();

		//index = (index + 1) % 4;
		index = (clock() / speed) % frames;

		frametime = clock() - framestart;
		if (framedelay - frametime > 0) {
			printf("delay");
			Sleep(framedelay - frametime);
		}
	}

	getchar();
	return 0;
}