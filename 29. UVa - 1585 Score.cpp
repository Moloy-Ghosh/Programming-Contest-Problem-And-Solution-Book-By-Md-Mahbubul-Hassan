#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        int i=0,sum=0;
        for(int j=0;j<len;j++){
            if(s[j]=='O'){
                i++;
                sum+=i;
            }
            else i=0;
        }
        cout<<sum<<endl;
    }
}
