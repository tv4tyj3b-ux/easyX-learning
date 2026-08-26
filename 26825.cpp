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
	cleardevice();

	//图片的加载与绘制
    //定义图片变量
	IMAGE img_mm;
	//加载图片
	//这里写相对路径,资源文件夹要和当前项目的main文件放在一起
	loadimage(&img_mm, "assets\\26825.png",640,480);
	//输出图片
	putimage(0, 0, &img_mm);
	
	//透明贴图,掩码图
	IMAGE img_play;
	IMAGE img_play_mask;
	loadimage(&img_play, "assets\\26826.png", 100, 100);
	loadimage(&img_play_mask, "assets\\26826_2.png", 100, 100);
	putimage(50, 20, &img_play_mask,NOTSRCERASE);
	putimage(50, 20, &img_play,SRCINVERT);

	getchar();
	return 0;
}