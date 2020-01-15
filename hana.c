#include<stdio.h>
int cap(int count)
{
    int num;
    num = count % 2;
    if(num == 0)
    num = count / 2;
    else
    {
        num = count / 2;
        num++;
    }
    return num;    
}
int main()
{
    int n,count=0,b;
    char a,c;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        c=getchar();
        if(c=='H')
        {
        count++;
        while(a!='P')
        {
            a=getchar();
            count++;
        }
        }
        if(count!=0)
        {
        b=cap(count);
        printf("%d",b);    
        }    
        printf("hi");
    }    
}