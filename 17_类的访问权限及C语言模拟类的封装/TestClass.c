#include <stdio.h>
//函数指针写法
typedef void (*PFN_SetHour)(struct tagClock* cl, int n);

struct tagClock {
    //数据
    int nHour;
    int nMinute;
    int nSecond;
    PFN_SetHour pfnSetHour;
};


void SetHour(struct tagClock* cl, int n) {
        cl->nHour = n;
    }

int main()
{
    struct tagClock cl;

    cl.pfnSetHour = SetHour;
    
    cl.pfnSetHour(&cl, 1);

    printf("%d \t", cl.nHour);

    return 0;
}
