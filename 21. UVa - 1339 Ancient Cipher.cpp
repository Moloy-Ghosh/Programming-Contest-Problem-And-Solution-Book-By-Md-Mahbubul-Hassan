#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
        int len=s1.length();
        int c_s1[26]={},c_s2[26]={};
        for(int i=0;i<len;i++){
            c_s1[s1[i]-'A']++;
            c_s2[s2[i]-'A']++;
        }
        int n_s1[101]={},n_s2[101]={};
        for(int i=0;i<26;i++){
            n_s1[c_s1[i]]++;
            n_s2[c_s2[i]]++;
        }
        int a=1;
        for(int i=0;i<=len;i++){
            if(n_s1[i]!=n_s2[i]){
                a=0;
                break;
            }
        }
        if(a==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
