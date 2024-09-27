/*Challenge 5 : Calcul de la Puissance
Écrivez un programme C qui calcule la puissance d'un nombre entier base élevé à un exposant exposant.
 Utilisez une boucle pour effectuer le calcul. 
Par exemple, pour base = 3 et exposant = 4, le résultat est 3^4 = 81.*/

#include <stdio.h>

int main() {
    int n , e, r = 1;
    printf("Entrez un nombre et son exposant : \n");
    scanf("%d %d", &n , &e);
    for (int i = 0; i < e; i++) {   
        r = r * n;
    }
    printf("%d",r );
    return 0 ;

}