#include <iostream>

using namespace std;

int main()
{
    int t,cas=0;
    while(scanf("%d",&t)==1&&t){
        int a[t],b[t],c[t],d[t],cycle=1;
        for(int i=0;i<t;i++){
            cin>>a[i]>>b[i]>>c[i];
            d[i]=a[i]+b[i];
            cycle*=d[i];
        }
        int r=-1;
        for(int tim=1;tim<=cycle;tim++){
            int aw=0,sl=0;
            for(int i=0;i<t;i++){
                if(c[i]<=a[i]){
                    aw++;
                }
                else{
                    sl++;
                }
                c[i]++;
                if(c[i]==d[i]+1){
                    c[i]=1;
                }
            }
            if(aw==t){
                r=tim;
                break;
            }
            for(int i=0;i<t;i++){
                if(c[i]==a[i]+1 && aw>=sl){
                    c[i]=1;
                }
            }
        }
        printf("Case %d: %d\n",++cas,r);
    }
}
