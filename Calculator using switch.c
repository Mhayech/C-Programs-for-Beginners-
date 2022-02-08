#include<stdio.h>

int main() {
    char ch;
    int a,b,c;
    printf("Donner a: ");
    scanf("%d",&a);
    printf("Donner b: ");
    scanf("%d",&b);
    printf("\n");
    fflush(stdin);
    printf("Choose an Operation :\n");
    printf("1.Choose A for Addition : \n");
    printf("2.Choose S for Soustraction : \n");
    printf("3.Choose D for Division : \n");
    printf("4.Choose M for Multiplication : \n");
    scanf("%c",&ch);
    switch(ch){
    case 'A':
        c = a+b;
        printf("%d",c);
        break;
    case 'S':
        c = a-b;
        printf("%d",c);
        break;
    case 'D':
        float c;
        c = a/b;
        printf("%d",c);
        break;
    case 'M':
        c = a*b;
        printf("%d",c);
        break;
    default:
        printf("Preciser Votre Choix");
    }

}
