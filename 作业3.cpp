//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值 
//求另一个f(n)=n的n值
// 2021-11-04 
#include <stdio.h>
int main(void)
{
    int n,i,judge,count = 0,l;
    for(i = 0;i < 1000000;i++)
    {
        l = i;
        while(l > 0)
        {
            judge = l % 10;
            if(judge == 1)
            {
                count++;
                if(count == i)
                printf("%d\n",i);
            }
            l /= 10;
        }
    }
    return 0;
} 
