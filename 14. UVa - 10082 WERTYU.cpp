#include <iostream>

using namespace std;

char change(char a){
    if(a=='=') a='-';
    else if(a=='-') a='0';
    else if(a=='0') a='9';
    else if(a=='9') a='8';
    else if(a=='8') a='7';
    else if(a=='7') a='6';
    else if(a=='6') a='5';
    else if(a=='5') a='4';
    else if(a=='4') a='3';
    else if(a=='3') a='2';
    else if(a=='2') a='1';
    else if(a=='1') a='`';
    else if(a=='\\') a=']';
    else if(a==']') a='[';
    else if(a=='[') a='P';
    else if(a=='P') a='O';
    else if(a=='O') a='I';
    else if(a=='I') a='U';
    else if(a=='U') a='Y';
    else if(a=='Y') a='T';
    else if(a=='T') a='R';
    else if(a=='R') a='E';
    else if(a=='E') a='W';
    else if(a=='W') a='Q';
    else if(a=='\'') a=';';
    else if(a==';') a='L';
    else if(a=='L') a='K';
    else if(a=='K') a='J';
    else if(a=='J') a='H';
    else if(a=='H') a='G';
    else if(a=='G') a='F';
    else if(a=='F') a='D';
    else if(a=='D') a='S';
    else if(a=='S') a='A';
    else if(a=='/') a='.';
    else if(a=='.') a=',';
    else if(a==',') a='M';
    else if(a=='M') a='N';
    else if(a=='N') a='B';
    else if(a=='B') a='V';
    else if(a=='V') a='C';
    else if(a=='C') a='X';
    else if(a=='X') a='Z';
    return a;
}

int main()
{
    char c;
	while (scanf("%c", &c) != EOF) {
		printf("%c",change(c));
	}
}
