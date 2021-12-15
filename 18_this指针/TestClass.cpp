#include <iostream>

/*
   同一个类的对象，其成员函数是一样的，表示同一个类的成员函数是共用的
   （1）数据是独立的；
   （2）成员函数是共用的；
   
   类成员函数指针：（__thiscall __stdcall __cdcel __fastcall）
   __thiscall 通过exec寄存器传参

*/

class CClock {
private:
    int m_nHour = 1;
    int m_nMinute = 2;
    int m_nSecond = 3;
public:
// 成员函数来暴露给外面的调用者使用
    int GetHour()
    {
        return this->m_nHour;
    }
    void SetHour(int nHour)
    {
        this->m_nHour = nHour;
    }
};


//定义类的成员函数指针
typedef int(CClock::*PFN_GETHOUR)(void);


int main()
{
    CClock clock;
    CClock clock2;

    clock.SetHour(111);
    clock2.SetHour(222);

    std::cout << clock.GetHour() << std::endl;
    std::cout << clock2.GetHour() << std::endl;


//    PFN_GETHOUR lp =   &CClock::GetHour;

//    cl.pfnSetHour = SetHour;
//    
//    cl.pfnSetHour(&cl, 1);
//
//    printf("%d \t", cl.nHour);

    return 0;
}
