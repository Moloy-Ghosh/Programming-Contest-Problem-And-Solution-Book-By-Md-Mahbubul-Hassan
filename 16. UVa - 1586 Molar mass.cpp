#include <iostream>

using namespace std;
float getnum(char a){
    if(a=='0')return 0;
    if(a=='1')return 1;
    if(a=='2')return 2;
    if(a=='3')return 3;
    if(a=='4')return 4;
    if(a=='5')return 5;
    if(a=='6')return 6;
    if(a=='7')return 7;
    if(a=='8')return 8;
    if(a=='9')return 9;
}
float getch(char c){
    if(c=='C')return 12.01;
    if(c=='H')return 1.008;
    if(c=='O')return 16.00;
    if(c=='N')return 14.01;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.length();
        float sum=0;
        for(int i=0;i<len;i++){
            if(s[i]=='C'||s[i]=='H'||s[i]=='O'||s[i]=='N'){
                float m=0;
                for(int j=i+1;s[j]>='0'&&s[j]<='9';j++){
                    m*=10;
                    m+=getnum(s[j]);
                }
                if(m==0)sum+=getch(s[i]);
                else sum+=(getch(s[i])*m);
            }
        }
        printf("%0.3f\n",sum);
    }
}
