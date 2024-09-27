/*Challenge 3 : Somme des N Nombres
Écrivez un programme C qui demande un nombre entier n à l’utilisateur 
et calcule la somme des n premiers nombres naturels. 
Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.*/
 
 #include <stdio.h>


 int main() {
    int n, r = 0;
    printf("Entrez un nombre entier positif : \n");
    scanf("%d",&n);
 

    for (int i = n; i > 0; i--) {
        r = r + i;
        
    }
    
    printf(" la somme des %d premiers nombres naturels : %d",n ,r );
    

    return 0;

}