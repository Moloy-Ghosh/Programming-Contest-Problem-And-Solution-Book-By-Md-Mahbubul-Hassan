#include <iostream>

using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t){
        string tem;
        int len1=s.length();
        int len2=t.length();
        if(len1>len2){
            tem=s;
            s=t;
            t=tem;
        }
        len1=s.length();
        len2=t.length();
            int j=0;
            int k=0, tlen1=0;
            for(int i=0;i<len1;i++){
                if(j<len2){
                    if(s[i]=='1'||(s[i]=='2' && t[j]=='1')){
                        j++;
                        tlen1++;
                    }
                    else {
                        i=-1;
                        k++;
                        j=k;
                        tlen1=k;
                    }
                    continue;
                }
                tlen1++;
            }
            while(j<len2){
                tlen1++;
                j++;
            }


            tem=s;
            s=t;
            t=tem;
            len1=s.length();
            len2=t.length();
            j=0, k=0;
            int tlen2=0;
            for(int i=0;i<len1;i++){
                if(j<len2){
                    if(s[i]=='1'||(s[i]=='2' && t[j]=='1')){
                        j++;
                        tlen2++;
                    }
                    else {
                        i=-1;
                        k++;
                        j=k;
                        tlen2=k;
                    }
                    continue;
                }
                tlen2++;
            }

            if(tlen1>tlen2){
                int tem=tlen1;
                tlen1=tlen2;
                tlen2=tem;
            }
            cout<<tlen1<<endl;
    }
}
