#include <iostream>

using namespace std;
int a[100000];

int main()
{
    while(true){
        a[0]=0;
        a[1]=1;
        int n;
        cin>>n;
        if(n==0) break;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                a[i]=a[i/2];
            }
            else{
                a[i]=a[i/2]+a[(i/2)+1];
            }
        }
        int m=0;
        for(int i=0;i<(n+1);i++){
            if(m<a[i]){
                m=a[i];
            }
        }
        cout<<m<<endl;
    }
}
