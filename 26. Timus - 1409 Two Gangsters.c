#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,n;
    scanf("%d %d",&h,&n);
    int t=(h+n)-1;
    int H=t-h;
    int N=t-n;
    printf("%d %d",H,N);
}
