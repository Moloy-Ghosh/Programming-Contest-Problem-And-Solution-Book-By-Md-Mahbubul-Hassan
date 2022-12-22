#include <iostream>

using namespace std;

void A(int i,int a){
    if(i==a+1){
        for(int j=0;j<a;j++){
            printf(")");
        }
    }
    else{
        printf("sin(%d",i);
        if(i!=a){
            if(i%2==0)printf("+");
            else printf("-");
        }
        A(i+1,a);
    }
}
void S(int i,int s){
    for(int l=1;l<s;l++){
        printf("(");
    }
    for(int j=1,k=s;j<=s;j++,k--){
        A(i,j);
        printf("+%d",k);
        if(k!=1){
            printf(")");
        }
    }
}
int main()
{
    int a;
    cin>>a;
    S(1,a);
}
