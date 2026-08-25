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
	getchar();
	return 0;
}