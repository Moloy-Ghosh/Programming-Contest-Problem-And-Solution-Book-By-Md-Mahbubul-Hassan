#include <iostream>
using namespace std;
char s[12];
bool res(){
    for(int i=0;i<6;i++){
        if(s[i]!=s[i+6]){
            return false;
        }
    }
    return true;
}
void RotateA(){
    int temp=s[0];
    s[0]=s[1];
    s[1]=s[5];
    s[5]=s[4];
    s[4]=temp;
}
void RotateB(){
    int temp=s[1];
    s[1]=s[3];
    s[3]=s[4];
    s[4]=s[2];
    s[2]=temp;
}

int main()
{
    while(scanf("%s\n",s)!=EOF){
        bool result;
        for(int i=0;i<6;i++){
            result=res();
            if(result) break;
            else if(i<4) RotateA();
            else if(i==4){
                RotateB();
                RotateA();
            }
            else if(i==5){
                RotateA();
                RotateA();
            }
            for(int j=0;j<4;j++){
                result=res();
                if(result) break;
                RotateB();
            }
            if(result) break;
        }
        if(result) printf("TRUE\n");
        else printf("FALSE\n");
    }
    return 0;
}
