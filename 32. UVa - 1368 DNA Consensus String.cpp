#include <iostream>

using namespace std;
string con;
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int m,n;
        cin>>m>>n;
        string dna[m];
        int sum=0;
        for(int i=0;i<m;i++){
            cin>>dna[i];
        }
        for(int i=0;i<n;i++){
            int w[4];
            w[0]=0;
            w[1]=0;
            w[2]=0;
            w[3]=0;
            for(int j=0;j<m;j++){
                if(dna[j][i]=='A'){
                    w[0]++;
                }
                else if(dna[j][i]=='C'){
                    w[1]++;
                }
                else if(dna[j][i]=='G'){
                    w[2]++;
                }
                else if(dna[j][i]=='T'){
                    w[3]++;
                }
            }
            if((w[0]>w[1]&&w[0]>w[2]&&w[0]>w[3])||(w[0]==w[1] && w[0]==w[2] && w[0]==w[3] )||(w[0]==w[1]&&w[0]==w[2]&&w[0]>w[3])||(w[0]==w[3]&&w[0]==w[2]&&w[0]>w[1])||(w[0]==w[1]&&w[0]==w[3]&&w[0]>w[2])||(w[0]>w[1]&&w[0]>w[2]&&w[0]==w[3])||(w[0]>w[1]&&w[0]>w[3]&&w[0]==w[2])||(w[0]>w[2]&&w[0]>w[3]&&w[0]==w[1])){
                con+='A';
                sum=sum+w[1]+w[2]+w[3];
            }
            else if((w[1]>w[0]&&w[1]>w[2]&&w[1]>w[3])||(w[1]==w[2]&&w[1]==w[3])||(w[1]>w[2]&&w[1]==w[3])||(w[1]>w[3]&&w[1]==w[2])){
                con+='C';
                sum=sum+w[0]+w[2]+w[3];
            }
            else if((w[2]>w[1]&&w[2]>w[0]&&w[2]>w[3])||(w[2]==w[3])){
                con+='G';
                sum=sum+w[1]+w[0]+w[3];
            }
            else if(w[3]>w[1]&&w[3]>w[2]&&w[3]>w[0]){
                con+='T';
                sum=sum+w[1]+w[2]+w[0];
            }
        }
        cout<<con<<endl;
        cout<<sum<<endl;
        con.clear();
    }
}
