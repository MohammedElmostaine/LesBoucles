/*Challenge 2 : Factorielle d'un Nombre
Écrivez un programme C qui calcule la factorielle d'un nombre entier positif n entré par l’utilisateur. La factorielle de n est le produit de tous les entiers positifs inférieurs ou égaux à n. Par exemple, pour n = 5, affichez : 5! = 120.*/

#include <stdio.h>


 int main() {
    int n, r = 1;
    printf("Entrez un nombre entier positif : \n");
    scanf("%d",&n);
   if (n == 0) {
    printf("%d!= 1 \n",n);
   
    }else{

    for (int i = n; i > 0; i--) {
        r = r * i;
        
    }
    
    printf("%d! = %d",n ,r );
    }

    return 0;

}