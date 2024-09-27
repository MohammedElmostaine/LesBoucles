/*Challenge 4 : Affichage des N Premiers Nombres Impairs
Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres impairs.
 Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9.*/
 
 
#include <stdio.h>

int main () {
    int n,r ;
    printf( "Entrez un nombre de votre choix : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        r = (2 * i) + 1;
        printf("%d" , r);
        if (i <= n-2){
            printf(";");
        }
        

    }
    return 0;

}
        
    
    /*if ((r % 2) == 1) {
        printf("%d", r);
    }
 
    }

}*/