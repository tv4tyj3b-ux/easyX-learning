#include <easyx.h>
#include <cstdio>
#include <cmath>
#include <fstream>
void drawshape() {
	//绘制一个点
	putpixel(100, 200, BLACK);
	//绘制一条线
	setlinecolor(BLUE);
	setlinestyle(PS_DOT, 5);
	line(0, 0, getwidth(), getheight());
	//绘制一个矩形
	rectangle(50, 50, 150, 100);
	setfillcolor(YELLOW);
	fillrectangle(50, 50+50, 150, 100+50);
	solidrectangle(50, 150, 150, 200);
	roundrect(200, 50, 300, 100, 10, 10);
	fillroundrect(200, 50+100, 300, 100+100, 10, 10);
	solidroundrect(200, 50 + 200, 300, 100 + 200, 10, 10);
	//绘制一个圆形,剩下的fill（有边框填充）、solid（无边框填充）基本都是一样的
	circle(300, 300, 50);
	fillcircle(350, 350, 50);
	solidcircle(400, 400, 50);
	//绘制椭圆
	ellipse(400, 50, 500, 100);
}

//int main() {
//	//创建图形窗口
//	initgraph(640, 480, 1);
//	//设置窗口背景颜色
//	setbkcolor(WHITE);
//	//用设置的背景颜色填充全窗口
//	cleardevice();
//	//窗口坐标体系
//	//左上角是坐标原点，x轴向右递增，y轴向下递增
//	//防止程序退出
//	drawshape();
//	getchar();
//	return 0;
//}