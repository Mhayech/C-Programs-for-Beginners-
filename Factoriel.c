#include <stdio.h>
#include<string.h>
int main() {
    int num;
    long int fact;
    int i;
    fact=1;
    printf("Donner un nombre : ");
    scanf("%d",&num);
    if(num==0)
        printf("0 factorielle est 0");
    for(i=1;i<=num;i++)
        fact*=i;
    printf("%d factorielle est %ld",num,fact);

}
