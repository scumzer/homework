//ѡ����
//����һ���ַ���������
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//����һ����ʾ��֧�ֵķֱ����嵥���м䶺�ŷָ���
//�������뻭��Ŀ�͸ߣ�Ȼ���������嵥����ѡһ����ӽ��ķֱ������
//��������2000��1000������ķֱ���Ӧ����1920x1080����Ϊ�����ֱ��ʵ�������
//������³���
// 2021-11-14
#include <stdio.h>
#include <math.h>
int main()
{
    char ress[2048];
    int x,y,m = 1,h,u = 0,i = 0,n,l = 0;
    char ch;
    while((ch = getchar())!='\n')
    ress[l++] = ch;
    scanf("%d %d", &x, &y);
    int width[50],height[50];
    l = 0;
    while(ress[l] != '\n')
    {
        if(ress[l] == 'x')
        {
            if(h == 3)
                width[u++] += (ress[l-3] - 48)*100+(ress[l-2]-48)*10+(ress[l-1]-48);
            else
                width[u++] = (ress[l-4]-48)*1000+(ress[l-3] - 48)*100+(ress[l-2]-48)*10+(ress[l-1]-48);
            m = 0;
            h = 0;
        }
        if(ress[l] == ',')
        {
            if(h == 3)
                height[i++] += (ress[l-3] - 48)*100+(ress[l-2]-48)*10+(ress[l-1]-48);
            else
                height[i++] = (ress[l-4]-48)*1000+(ress[l-3] - 48)*100+(ress[l-2]-48)*10+(ress[l-1]-48);
            m = 1;
            h = 0;
        }
        if(m == 1)
        {
            width[h] = ress[l];
            h++;
        }
        else
        {
            height[h] = ress[l];
            h++;
        }
        l++;
    }
    for(;;)
    {
        for(l = 0;l < u-1;l++)
        {
            m = x - width[l];
            n = x - width[l+1];
            if(n == 0)
            {
                x = width[l+1];
                break;
            }
            if(m > 0 && n < 0)
            {
                if(abs(m) > abs(n))
                x = width[l+1];
                else
                x = width[l];
                break;
            }
        }
    }
    for(;;)
    {
        for(l = 0;l < i-1;l++)
        {
            m = x - height[l];
            n = x - height[l+1];
            if(n == 0)
            {
                x = height[l+1];
                break;
            }
            if(m > 0 && n < 0)
            {
                if(abs(m) > abs(n))
                y = height[l+1];
                else
                y = height[l];
                break;
            }
        }
    }

    // ѧϰһ�� sscanf ���Է��㴦�� ress �ַ���

    printf("ѡ�еķֱ�����%dx%d\n",x,y);
    return 0;
} 
