#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a==0 && b==0 && c==0)break;
        int arr[a];
        for(int i=0;i<a;i++){
            arr[i]=i+1;
        }
        int sum=1,i=0,j=a-1;
        while(sum>0){
            int b1=0,c1=0;
            for(;;i++){
                if(i==a)i=0;
                if(arr[i]!=0)b1++;
                if(b1==b){
                    //i++;
                    break;
                }
            }
            for(;;j--){
                if(j==-1)j=a-1;
                if(arr[j]!=0)c1++;
                if(c1==c){
                    //j--;
                    break;
                }
            }
            if(arr[i]==arr[j]){
                if(arr[i]<10)cout<<"  ";
                else if(arr[i]<100)cout<<" ";
                cout<<arr[i];
                arr[i]=0;
            }
            else{
                if(arr[i]<10)cout<<"  ";
                else if(arr[i]<100)cout<<" ";
                cout<<arr[i];
                if(arr[j]<10)cout<<"  ";
                else if(arr[j]<100)cout<<" ";
                cout<<arr[j];
                arr[i]=0;
                arr[j]=0;
            }
            i++;
            j--;
            int su=0;
            for(int k=0;k<a;k++){
                su+=arr[k];
            }
            sum=su;
            if(sum!=0)cout<<",";
            else cout<<endl;
        }
    }
}
