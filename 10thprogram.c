#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double pi= 3.14159;
    double mul1=a*c;
    double mul2=pi*c*c;
    double sum=a+b;
    double mul3=sum*c;
    double mul4=b*b;
    double mul5=a*b;

printf("TRIANGULO: %lf\n",1/2.0*mul1);
printf("CIRCULO: %lf\n",mul2);
printf("TRAPEZIO: %lf\n",1/2.0*mul3);
printf("QUADRADO: %lf\n",mul4);
printf("RETANGULO: %lf\n",mul5);
}
