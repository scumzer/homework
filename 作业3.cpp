//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ 
//����һ��f(n)=n��nֵ
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
