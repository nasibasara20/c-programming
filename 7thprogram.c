#include<stdio.h>
int main(){
long long a,b,c,d;

scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
long long mul1=a*b;
long long mul2=c*d;


long long sub=mul1-mul2;



printf("DIFERENCA = %.1ld\n",sub);
}
