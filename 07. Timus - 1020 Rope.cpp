#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    float r,res;
    cin>>n>>r;
    float arrx[n],arry[n];
    for(int i=0;i<n;i++){
        cin>>arrx[i]>>arry[i];
    }
    res=2*3.1416*r;
    for(int i=0;i<n;i++){
        if(i<(n-1)){
            res+=sqrt(((arrx[i]-arrx[i+1])*(arrx[i]-arrx[i+1]))+((arry[i]-arry[i+1])*(arry[i]-arry[i+1])));
        }
        else{
            res+=sqrt(((arrx[i]-arrx[0])*(arrx[i]-arrx[0]))+((arry[i]-arry[0])*(arry[i]-arry[0])));
        }
    }
    printf("%.2f",res);
}
