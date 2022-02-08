#include <stdio.h>
int main(){
    int tab[50];
    int first,last,mid;
    int i;
    int num;
    int N;
    printf("Donner la taille de tableau : ");
    scanf("%d",&N);
    printf("\n");
    printf("Donner les elements du tableau : ");
    printf("---------------------------\n");
    for(i=0;i<=N;i++){
        printf("tab[%d] = ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Donner l'element a trouver : ");
    scanf("%d",&num);
    first=0;
    last=N-1;
    mid=(first+last)/2;
    while(first<=last){
        if(tab[mid]<num){
            first=mid+1;
        }
        else if(tab[mid]==num)
            printf("%d est present dans l'index %d",num,mid+1);
            break;
    }


}
