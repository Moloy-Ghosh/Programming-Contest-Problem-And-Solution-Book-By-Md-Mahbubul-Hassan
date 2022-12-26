#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        int arr[n];
        for(int i=1;i<=n;i++){
            arr[i-1]=i;
        }
        if(n==1){
            cout<<"Discarded cards:"<<endl<<"Remaining card: "<<n<<endl;
        }
        else{
            cout<<"Discarded cards: ";
            for(int i=0;i<n;i++){
                cout<<arr[i];
                arr[i]=0;
                if (arr[n-2]!=0) cout<<", ";
                int tem=arr[i+1];
                for(int j=i+1;j<n-1;j++){
                    arr[j]=arr[j+1];
                }
                arr[n-1]=tem;
                if(arr[n-2]==0){
                    cout<<endl;
                    break;
                }
            }
            cout<<"Remaining card: "<<arr[n-1]<<endl;
        }

    }
}
