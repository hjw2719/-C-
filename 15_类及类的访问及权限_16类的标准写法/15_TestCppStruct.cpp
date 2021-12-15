#include<iostream>
/*
 *类的3大特性
 *1、封装,把数据和数据相关的方法（函数）放在结构体里
 *2、继承
 *3、多态
 *
 *
*/ 


 struct Cloth {
    int nColor;
    int nSize;
 };

// struct 默认访问权限是public
// struct WashMachine {
//    int nWidth;
//    int nHeight;
//    int nLength;
//    int nType;//类型（滚筒，波轮）
//    int nBland;//品牌
//
//    void wash(Cloth& cl) {
//    printf("洗衣服 颜色=%d 大小=%d\r\n", cl.nColor, cl.nSize);
//    }
// };

//class ------类
//
class CWashMachine {
private:
    //数据成员
    int nWidth;
    int nHeight;
    int nLength;
    int nType;//类型（滚筒，波轮）
    int nBland;//品牌
    int nColor;
    int nSize;

    //成员函数
public:
    void wash(Cloth& cl) {
    printf("洗衣服 颜色=%d 大小=%d\r\n", cl.nColor, cl.nSize);
    }
}; 

//访问权限（指在当前类域之外访问的规则）类默认访问是私有权限
//1、public 公有权限（类域里和类域外均可访问）
//2、protected保护权限（继承中使用）
//3、private私有权限（类域里可以访问，类域外不可以访问）

class CClock {
private:
    int m_nHour;
    int m_nMinute;
    int m_nSecond;

public:
    //成员函数来暴露给外面的调用者使用
    // 可以先在class内部声明，然后在class外部定义
    // int GetHour();
    // int SetHour(int nHour);
    // 一般把声明放在.h或.hpp里，把函数实现放在.cpp中

    int GetHour(){
        return m_nHour;
    }

    void SetHour(int nHour) {
        if (nHour >= 24 || nHour < 0) {
            return;
        }
        m_nHour = nHour;
    }
};


int main()
 {
     CWashMachine wm;
     Cloth cl;

     wm.wash(cl);

     CClock clock;
     clock.GetHour();
     clock.SetHour(25);
     


     return 0;
 }
