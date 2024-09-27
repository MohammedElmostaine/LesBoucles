#include <stdio.h>

int main () {
    int n,r ;
    printf( "Entrez un nombre de votre choix : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        r = (2 * i);
        printf("%d" , r);
        if (i <= n-2){
            printf(";");
        }
        

    }
    return 0;

}