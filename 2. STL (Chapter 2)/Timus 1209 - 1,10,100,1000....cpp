#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N,pos=1;
    cin>>N;
    set<long long int>one;
    for(long long int i=0;;i++){
        pos+=i;
        if(pos>2147483648)break;
        one.insert(pos);
    }
    while(N--){
        long long int k,ans;
        cin>>k;
        set<long long int>::iterator it;
        it=one.lower_bound(k);
        if(it!=one.end()&&*it==k)ans=1;
        else ans=0;
        if(N==0) cout<<ans<<endl;
        else cout<<ans<<" ";
    }
}
