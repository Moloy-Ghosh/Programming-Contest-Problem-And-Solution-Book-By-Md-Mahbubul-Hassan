#include <stdio.h>
int main()
{
    int m,n,i,s=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;++i)
    {
        s=s+(m+1);
    }
    printf("%d",s);
}
