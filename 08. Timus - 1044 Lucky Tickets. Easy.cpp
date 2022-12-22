#include <iostream>
#include <math.h>

using namespace std;
int sum(int a){
    int s=0;
    while(a>0){
        s+=(a%10);
        a/=10;
    }
    return s;
}
int n,arr[38];
int main()
{
    cin>>n;
    for(int i=0;i<(pow(10,n/2));i++){
        int s=sum(i);
        arr[s]++;
    }
    int res=0;
    for(int i=0;i<(pow(10,n/2));i++){
        int s=sum(i);
        res+=arr[s];
    }
    cout<<res;
}
