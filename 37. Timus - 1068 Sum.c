#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=0,j;
    scanf("%d",&n);
    if(n<=1)
    {
        for(i=1;i>=n;i--)
        {
            s+=i;
        }
    }
    else
    {
        for(j=1;j<=n;j++)
        {
            s+=j;
        }
    }
    printf("%d",s);
}
