#include <iostream>

using namespace std;

int main()
{
    int r;
    while(cin>>r){
        if(r==-1)break;
        string s1,s2;
        cin>>s1>>s2;
        int len1=s1.length(),len2=s2.length();
        int c1=0,c2=0;
        for(int i=0;i<len2;i++){
            int s=c1;
            for(int j=0;j<len1;j++){
                if(s2[i]==s1[j]){
                    s1[j]='-';
                    c1++;
                }
            }
            if(s==c1){
                int c3=0;
                for(int k=i;k>=0;k--){
                    if(s2[i]==s2[k]){
                        c3++;
                    }
                    if(c3>=2)break;
                }
                if (c3==1)c2++;
            }
            if(c1==len1 || c2==7) break;
        }
        if(c1==len1) cout<<"Round "<<r<<endl<<"You win."<<endl;
        else if(c2>=7) cout<<"Round "<<r<<endl<<"You lose."<<endl;
        else cout<<"Round "<<r<<endl<<"You chickened out."<<endl;
    }
}
