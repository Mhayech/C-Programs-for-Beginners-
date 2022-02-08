#include<stdio.h>

int main() {
    char c;
    printf("Donner un caractere : ");
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=122)){
        printf("C'est un Alphabet");
    }
    else if(c>=48 && c<=57){
        printf("C'est un chiffre");
    }
    else
        printf("C'est un Symbole Special");
}
