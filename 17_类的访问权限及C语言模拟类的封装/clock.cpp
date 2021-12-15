#include<iostream>
#include "clock.h"

/*
 *面向对象
 *1、封装
 *2、继承
 *3、多态
 */
 
//类的访问权限检查时机;
//编译时期检查

int GetHour::CClock() {
    return this->m_nHour;
}

void SetHour::CClock(int nHour) {
    this->m_nHour = nHour;
}

int main()
{
    CClock clock;
    *(int*)&clock = 111;//强行改变类的属性，破坏了封装

    //clock.m_nHour = 1;
    //clock.GetHour();
    //clock.setHour(25);
    std::cout << clock.GetHour() << std::endl;


    return 0;
}
