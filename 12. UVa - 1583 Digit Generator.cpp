#include <iostream>

using namespace std;
int digitsum(int a){
    int sum=0;
    while(a>0){
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int res=0,n,m;
        cin>>n;
        if(n<46){
            m=0;
            for(int j=m;j<n;j++){
                int s=digitsum(j)+j;
                if(s==n){
                    res=j;
                    break;
                }
            }
        }
        else{
            m=n-46;
            for(int j=m;j<n;j++){
                int s=digitsum(j)+j;
                if(s==n){
                    res=j;
                    break;
                }
            }
        }


        cout<<res<<endl;
    }
}
