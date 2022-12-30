#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[1001][n];
        for(int i=0;i<n;i++){
            cin>>arr[0][i];
        }
        for(int i=1;i<1001;i++){
            for(int j=0;j<n;j++){
                if(j!=n-1){
                    arr[i][j]=abs(arr[i-1][j]-arr[i-1][j+1]);
                }
                else{
                    arr[i][j]=abs(arr[i-1][j]-arr[i-1][0]);
                }
            }
            int c=0;
            for(int j=0;j<n;j++){
                if(arr[i][j]==0)c++;
            }
            if(c==n){
                cout<<"ZERO"<<endl;
                break;
            }
            int b=0;
            for(int j=0;j<i;j++){
                c=0;
                for(int k=0;k<n;k++){
                    if(arr[i][k]!=arr[j][k]){
                        break;
                    }
                    else c++;
                }
                if (c==n){
                    cout<<"LOOP"<<endl;
                    b=1;
                    break;
                }
            }
            if(b==1)break;
        }
    }
}
