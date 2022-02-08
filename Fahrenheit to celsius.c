#include<stdio.h>
int main(){
    float T1;
    printf("Welcome !\n");
    printf("Tu veux connaitre la degre en Celsius ?\n");
    printf("Donner La Temperature en Fahrenheit : ");
    scanf("%f",&T1);
    printf("\n");
    if(T1==0)
        printf("Too Cold ! La Temperature en Celsius vaut -17,77");
    else
        printf("La Temperature en Celsius vaut %f",(T1-32) * 5/9);
    return 0;
}
