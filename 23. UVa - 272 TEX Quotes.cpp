#include <iostream>

using namespace std;
int p=1;
int main()
{
    string s;
    while(getline(cin,s)){
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='"'){
                len++;
                s+='0';
                for(int j=len-1;j>i;j--){
                    s[j]=s[j-1];
                }
                if(p%2!=0){
                    s[i]='`';
                    s[i+1]='`';
                    p++;
                }
                else{
                    s[i]='\'';
                    s[i+1]='\'';
                    p++;
                }
            }
        }
        cout<<s<<endl;
    }
}
