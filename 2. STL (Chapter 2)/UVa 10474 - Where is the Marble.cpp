#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T=1;
    int N,Q;
    while(cin>>N>>Q){
        if(N==0&& Q==0)break;
        int arr[10001];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        sort(arr,arr+N);
        cout << "CASE# " << T++ << ":\n";
        while(Q--){
            int n;
            cin>>n;
            auto iter= lower_bound(arr,arr+N,n);
            if(iter==arr+N || *iter!=n)
                cout<<n<<" not found\n";
            else
                cout<<n<<" found at "<<(iter-arr)+1<<'\n';
        }
    }
}
