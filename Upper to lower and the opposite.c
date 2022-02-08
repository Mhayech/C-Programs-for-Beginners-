#include<stdio.h>
char UP(char c){
    char L;
    L=c-32;
    return L;
}
char LOW(char c){
    char l;
    l=c+32;
    return l;
}
int main(){
    char c;
    printf("Donner un caractere : ");
    scanf("%c",&c);
    if(c<=90 && c>=65)
        printf("%c",LOW(c));
    else if (c<=122 && c>=97)
        printf("%c",UP(c));


}
