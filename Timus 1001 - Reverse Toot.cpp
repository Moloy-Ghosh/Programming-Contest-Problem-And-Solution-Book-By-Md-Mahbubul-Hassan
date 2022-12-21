#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    vector<long long>a;
    long long b;
    while (scanf("%lld",&b)!=EOF){
        a.push_back(b);
    }
    for(int i=a.size()-1;i>=0;i--){
        printf("%.4lf\n",sqrt(a[i]));
    }
    return 0;
}
