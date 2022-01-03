//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
// 2021-10-29
#include <stdio.h>

int isPrime(int x);
int splitNum(int x, int num[]);

int main()
{
    int i,a[5],sum,square_sum,l = 0,record[10000],total = 0,m;
    for(i = 100;i <= 10000;i++)
    {
        for(m = 0;m < splitNum(i,a);m++)
        {
            sum += a[m];
            square_sum += a[m]*a[m];
        }
        if(isPrime(i) && isPrime(sum) && isPrime(square_sum))
        {
            printf("%d is superprime\n",i);
            record[l++] = i;
        }
    }
    for(m = 0;m <= l;m++)
    {
        total += record[m];
    }
    printf("average is %d\n",total/l);
    return 0;
}

int isPrime(int x)
{
    int j;
    for(j = 2;j <= x/j;j++)
        if(x%j == 0)
            return 0;
    return 1;
}

int splitNum(int x, int num[])
{
    int s = 0; 
    for(;;)
    {
        if(x>0)
        {
            num[s++] = x%10;  
            x /= 10;
        }
        else
            break;
    }
    return s;
}
