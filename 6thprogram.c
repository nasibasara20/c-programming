#include<stdio.h>
int main(){
double a,b,c;

scanf("%lf %lf %lf",&a,&b,&c);
double mul1=a*2;
double mul2=b*3;
double mul3=c*5;

double sum=mul1+mul2+mul3;
double sum1=2+3+5;


double div=sum/sum1;
printf("MEDIA = %.1lf\n",div);
}
