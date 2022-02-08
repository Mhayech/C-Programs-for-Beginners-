#include<stdio.h>

int main() {
    int T[100];
    int i,j;
    int N; //taille du tableau
    int tmp; //vaiable de permutation
    printf("Donner la taille du Tableau: ");
    scanf("%d",&N);
    printf("Donner les ele,ments du tableau :\n");
    for(i=0;i<N;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",T[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<=N;j++){
            if(T[i]<T[j])
                i++;
            else{
                T[i]=tmp;
                tmp=T[j];
                T[j]=T[i];
            }

        }
    printf("Bubble Sorting Gives :\n");
    for(i=0;i<N;i++)
        printf("%d",T[i]);
    }


}
