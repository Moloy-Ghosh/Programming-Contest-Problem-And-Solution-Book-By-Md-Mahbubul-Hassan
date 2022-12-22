#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,m[101],temp,s=0,i,j,k,l;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&m[i]);
    }

    for(j=0;j<t;j++)
    {
        for(k=j+1;k<t;k++)
        {
            if(m[j]>m[k])
            {
                temp=m[j];
                m[j]=m[k];
                m[k]=temp;
            }
        }
    }

    int ma=(t/2)+1;
    for(l=0;l<ma;l++)
    {
        s+=((m[l]/2)+1);
    }
    printf("%d",s);

}
