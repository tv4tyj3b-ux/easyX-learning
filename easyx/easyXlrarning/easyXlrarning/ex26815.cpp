#include <easyx.h>
#include <cstdio>
#include <cmath>
#include <fstream>

int main() {
	//创建图形窗口
	initgraph(640, 480 , EX_SHOWCONSOLE);
	//设置窗口背景颜色
	setbkcolor(WHITE);
	//用设置的背景颜色填充全窗口
	cleardevice();
	//窗口坐标体系
	//左上角是坐标原点，x轴向右递增，y轴向下递增
	//防止程序退出
	getchar();
	return 0;
}