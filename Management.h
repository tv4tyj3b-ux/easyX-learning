#pragma once
class Management
{
	enum Operator {
		Display,
		Insert,
		Remove,
		Modify,
		Search,
		Menu = 66,
	};

public:
	//启动管理类
	void run();
	//菜单
	int menu();

	//显示所有学生
	void display();
	//添加
	void add();
	//删除
	void erase();
	//修改
	void modify();
	//查找
	void search();

};

