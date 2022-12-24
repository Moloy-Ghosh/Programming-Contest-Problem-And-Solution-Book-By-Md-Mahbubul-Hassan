#include <iostream>

using namespace std;

int main()
{
    int l[12];
    while((cin>>l[0]>>l[1]>>l[2]>>l[3]>>l[4]>>l[5]>>l[6]>>l[7]>>l[8]>>l[9]>>l[10]>>l[11])){
        if((l[0]==l[1]) && (l[1]==l[2]) && (l[2]==l[3]) && (l[3]==l[4]) && (l[4]==l[5]) && (l[5]==l[6]) && (l[6]==l[7]) && (l[7]==l[8]) && (l[8]==l[9]) && (l[9]==l[10]) && (l[10]==l[11])){
            cout<<"POSSIBLE"<<endl;
        }
        else{
            int a=0,b=0,c=0,d[3];
            d[0]=l[0];
            for(int i=0;i<12;i++){
                if(l[i]!=d[0]){
                    d[1]=l[i];
                    break;
                }
            }
            for(int i=0;i<12;i++){
                if(l[i]!=d[0] && l[i]!=d[1]){
                    d[2]=l[i];
                    break;
                }
            }
            for(int i=0;i<12;i++){
                if(d[0]==l[i]){
                    a++;
                }
                if(d[1]==l[i]){
                    b++;
                }
                if(d[2]==l[i]){
                    c++;
                }
            }
            if((a==b && b==c && a==c)&&((l[0]!=l[1])&&(l[2]!=l[3])&&(l[4]!=l[5])&&(l[6]!=l[7])&&(l[8]!=l[9])&&(l[10]!=l[11]))){
                cout<<"POSSIBLE"<<endl;
            }
            else if(a==8 && b==4){
                int nw=0;
                if(l[0]!=l[1]) nw++;
                if(l[2]!=l[3]) nw++;
                if(l[4]!=l[5]) nw++;
                if(l[6]!=l[7]) nw++;
                if(l[8]!=l[9]) nw++;
                if(l[10]!=l[11]) nw++;

                if(nw==4) cout<<"POSSIBLE"<<endl;
                else cout<<"IMPOSSIBLE"<<endl;
            }
            else if(a==4 && b==8){
                int nw=0;
                if(l[0]!=l[1]) nw++;
                if(l[2]!=l[3]) nw++;
                if(l[4]!=l[5]) nw++;
                if(l[6]!=l[7]) nw++;
                if(l[8]!=l[9]) nw++;
                if(l[10]!=l[11]) nw++;

                if(nw==4) cout<<"POSSIBLE"<<endl;
                else cout<<"IMPOSSIBLE"<<endl;
            }
            else cout<<"IMPOSSIBLE"<<endl;
        }
    }

}
