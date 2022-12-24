#include <iostream>

using namespace std;
string s,s2;
int main()
{
    while(cin>>s){
        int p=0,m=0,cont=0;
        int len=s.length();
        for(int i=len-1;i>=0;i--){
            s2+=s[i];
        }
        if(s==s2){
            p=1;
        }
        for(int i=0;i<len;i++){
            if(s2[i]=='A' || s2[i]=='H' ||  s2[i]=='I' ||  s2[i]=='M' ||  s2[i]=='T' ||  s2[i]=='U' ||  s2[i]=='V' ||  s2[i]=='W' ||  s2[i]=='X' ||  s2[i]=='Y' || s2[i]=='1' || s2[i]=='8' ){
                if(s2[i]==s[i]){
                    cont++;
                }
            }
            else if(s2[i]=='0' || s2[i]=='O'){
                if(s[i]=='0'||s[i]=='O'){
                    cont++;
                }
            }
            else if(s2[i]=='E'&&s[i]=='3'){
                cont++;
            }
            else if(s2[i]=='S'&&s[i]=='2'){
                cont++;
            }
            else if(s2[i]=='Z'&&s[i]=='5'){
                cont++;
            }
            else if(s2[i]=='2'&&s[i]=='S'){
                cont++;
            }
            else if(s2[i]=='3'&&s[i]=='E'){
                cont++;
            }
            else if(s2[i]=='5'&&s[i]=='Z'){
                cont++;
            }
            else if(s2[i]=='L' && s[i]=='J'){
                cont++;
            }
            else if(s2[i]=='J' && s[i]=='L'){
                cont++;
            }
        }
        if(cont==len){
            m=1;
        }

        if(p==1 && m==1){
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        }
        else if(p==1 && m==0){
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        }
        else if(p==0 && m==1){
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        }
        else{
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
        }

        s2.clear();
    }
}
