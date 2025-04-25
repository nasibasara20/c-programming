#include<stdio.h>
int main(){
    int code_of_product_1,code_of_product_2;
    int number_of_units_of_product_1,number_of_units_of_product_2;
    float price_for_one_unit_product_1, price_for_one_unit_product_2;
    scanf("%d %d %f",&code_of_product_1,&number_of_units_of_product_1,&price_for_one_unit_product_1);
    scanf("%d %d %f",&code_of_product_2,&number_of_units_of_product_2,&price_for_one_unit_product_2);
    float mul1=number_of_units_of_product_1*price_for_one_unit_product_1;
    float mul2=number_of_units_of_product_2*price_for_one_unit_product_2;
    printf("VALOR A PAGAR: R$ %.2f",mul1+mul2);

}
