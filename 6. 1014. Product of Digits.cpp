#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>a;
    int n;
    cin>>n;
    if(n==1){
        cout<<"1";
    }
    else if(n==0){
        cout<<"10";
    }
    else{
        for(int i=9;i>=2;i--){
            while(n%i==0){
               a.push_back(i);
               n=n/i;
            }
        }
        if (n==1){
            for(int i=(a.size()-1);i>=0;i--){
                cout<<a[i];
            }
        }
        else cout<<"-1";
    }
}
