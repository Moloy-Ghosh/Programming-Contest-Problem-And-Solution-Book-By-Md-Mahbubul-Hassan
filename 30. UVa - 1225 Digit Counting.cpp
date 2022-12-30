#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[10]={};
        for(int i=0;i<10;i++){
            arr[i]=0;
        }
        for(int i=1;i<=n;i++){
            int tem=i;
            while(tem){
                arr[tem%10]++;
                tem/=10;
            }
        }
        for(int i=0;i<10;i++){
            cout<<arr[i];
            if(i==9)cout<<endl;
            else cout<<" ";
        }
    }
}
