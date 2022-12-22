#include <iostream>
#include <math.h>
using namespace std;

int situ(string s)
{
    if(s=="Alice") return 1;
    if(s=="Ariel")return 1;
    if(s=="Aurora")return 1;
    if(s=="Phil")return 1;
    if(s=="Peter")return 1;
    if(s=="Olaf")return 1;
    if(s=="Phoebus")return 1;
    if(s=="Ralph")return 1;
    if(s=="Robin")return 1;

    if(s=="Bambi")return 2;
    if(s=="Belle")return 2;
    if(s=="Bolt")return 2;
    if(s=="Mulan")return 2;
    if(s=="Mowgli")return 2;
    if(s=="Mickey")return 2;
    if(s=="Silver")return 2;
    if(s=="Simba")return 2;
    if(s=="Stitch")return 2;

    if(s=="Dumbo") return 3;
    if(s=="Genie") return 3;
    if(s=="Jiminy") return 3;
    if(s=="Kuzko") return 3;
    if(s=="Kida") return 3;
    if(s=="Kenai") return 3;
    if(s=="Tarzan") return 3;
    if(s=="Tiana") return 3;
    if(s=="Winnie") return 3;
}


int main()
{
    int n,i,pos1=1,set=0,pos2;
    string rec;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        cin>>rec;
        pos2=(int)situ(rec);
        set=set+abs((pos2-pos1));
        pos1=pos2;
    }
    printf("%d",set);
}
