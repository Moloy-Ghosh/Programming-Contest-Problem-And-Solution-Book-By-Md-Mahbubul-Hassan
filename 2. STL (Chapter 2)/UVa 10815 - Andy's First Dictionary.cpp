#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <string> words;
    string wrd;
    while(cin>>wrd){
        string nwrd="";
        int len=wrd.size();
        for(int i=0;i<len;i++){
            if((wrd[i]>='a'&&wrd[i]<='z')||(wrd[i]>='A'&&wrd[i]<='Z'))
                nwrd+=tolower(wrd[i]);
            else{
                if(nwrd!="") words.insert(nwrd);
                nwrd="";
            }
        }
        if(nwrd!="") words.insert(nwrd);
    }
    set<string>::iterator it;
    for(it=words.begin();it!=words.end();it++){
        cout<<*it<<endl;
    }
}
