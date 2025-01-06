#include <stdio.h>

int main(){
    int x, nombre;
    printf("Entrez un nombre entier : \n");
    scanf("%d", &x);
     for (int i = x; i >= 0; i--) {
        printf("%d\n", i);
    }
    if (x=0){
        printf ("Décollage!!!!");
    }
}