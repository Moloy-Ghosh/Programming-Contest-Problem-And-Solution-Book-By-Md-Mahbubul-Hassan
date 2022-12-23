#include <iostream>

using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t){
        int cont=0;
        int len1=s.length();
        int len2=t.length();
        int j=0;
        for(int i=0;i<len1;i++){
            while(j<len2){
                if(s[i]==t[j]){
                    cont++;
                    j++;
                    break;
                }
            j++;
            }
            if(j==len2){
                break;
            }
        }
        if(cont==len1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
