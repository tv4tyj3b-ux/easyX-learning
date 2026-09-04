#include "Management.h"
#include <conio.h>
#include <iostream>

void Management::run()
{
    //获取菜单返回值
    int op = Menu;
    while (true) {
        std::cout << "run while" << std::endl;
        //按esc返回主界面
        if (_kbhit()) {
            if (_getch() == 27)
                op = Menu;
        }
        op = Menu;
        switch (op)
        {
        case Menu:
            op = menu();
            break;
        case Management::Display:
            display();
            break;
        case Management::Insert:
            add();
            break;
        case Management::Remove:
            erase();
            break;
        case Management::Modify:
            modify();
            break;
        case Management::Search:
            search();
            break;
        default:
            break;
        }
    }
}

int Management::menu()
{
    //根据按钮的点击返回操作
    std::cout << "menu" << std::endl;
    int op = 0;
    std::cin >> op;
    return 0;
}

void Management::display()
{
    std::cout << "display" << std::endl;
}

void Management::add()
{
    std::cout << "add" << std::endl;
}

void Management::erase()
{
    std::cout << "erase" << std::endl;
}

void Management::modify()
{
    std::cout << "modify" << std::endl;
}

void Management::search()
{
    std::cout << "search" << std::endl;
}
