//该程序在于求解任意x的y次方 的结果的最后三位数
#include <stdio.h>

void main()
{
    while(1)
    {
    int x,y;
    int i=1,z=1;
    printf("\nplease press your number:\n");
    scanf("%d%d",&x,&y);

    while(i<=y)                    //将x与取模得到的答案相乘 不断取模 取y次
    {
        z=(z*x)%1000;
        i++;
    }

    if(z>=100)                    
    {
        printf("%d^%d的结果的最后三位数是:%d",x,y,z);
    }
    if(z>=10,z<100)
    {
        printf("%d^%d的结果的最后三位数是:0%d",x,y,z);
    }
    if(z<10)
    {
        printf("%d^%d的结果的最后三位数是:00%d",x,y,z);
    }
    }
}