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
        int i,res;
        for(i=0;i<len;i++){
            if(s[i]=='A'){
                res=i;
                if(i!=len-1){
                    int k;
                    for(k=res+1;k<len;k++){
                        i=res;
                        if(s[k]=='A'){
                            int j=k-1;
                            for(;i<len;){
                                j++;
                                if(j==len) j=0;
                                if(s[j]>s[i]){
                                    break;
                                }
                                if(s[j]<s[i]){
                                    res=k;
                                    i=k;
                                    break;
                                }
                                i++;
                            }
                        }
                    }
                }
                break;
            }
        }
        if (s[res]!='A'){
            for(i=0;i<len;i++){
                if(s[i]=='C'){
                    res=i;
                    if(i!=len-1){
                        int k;
                        for(k=i+1;k<len;k++){
                            i=res;
                            if(s[k]=='C'){
                                int j=k-1;
                                for(;i<len;){
                                    j++;
                                    if(j==len) j=0;
                                    if(s[j]>s[i]) break;
                                    if(s[j]<s[i]){
                                        res=k;
                                        i=k;
                                        break;
                                    }
                                    i++;
                                }
                            }
                        }
                    }
                    break;
                }
            }
            if(s[res]!='C'){
                for(i=0;i<len;i++){
                    if(s[i]=='G'){
                        res=i;
                        if(i!=len-1){
                            int k;
                            for(k=i+1;k<len;k++){
                                i=res;
                                if(s[k]=='G'){
                                    int j=k-1;
                                    for(;i<len;){
                                        j++;
                                        if(j==len) j=0;
                                        if(s[j]>s[i]) break;
                                        if(s[j]<s[i]){
                                            res=k;
                                            i=k;
                                            break;
                                        }
                                        i++;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
        cout<<s[res];
        int l=res+1;
        if(l==len)l=0;
        while (l!=res){
            cout<<s[l];
            l++;
            if(l==len)l=0;
        }
        cout<<endl;
    }
}
