#ifndef CLOCK_H
#define CLOCK_H
//手表
class CClock {
    private:
        int m_nHour = 1;
        int m_nMinute = 2;
        int m_nSecond = 3;
    public:
        // 成员函数来暴露给外面的调用者使用
        int GetHour();
        void SetHour(int nHour);

};
#endif
