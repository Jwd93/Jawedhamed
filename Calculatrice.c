
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

  int main() {
  int nb1, nb2, answer = 1;
  char op;

  printf("Ce programme realise l'operation des deux nombres saisie par "
         "l'utilisateur\n");

  while (answer != 0) {
    printf("Saisir deux nombres :\n");
    scanf("%d %d", &nb1, &nb2);
    printf(
        "op='+' pour une addition/ op='-' pour une soustraction/ op='/' pour "
        "une division/ op='' pour un produit/ op='^' pour la mise en "
        "puissance/ op='%%' pour le modulo/ op='a' pour la valeur absolue\n");
    scanf("\n%c", &op);

    switch (op) {
    case '+':
      printf("La somme de %d et de %d est de %d\n", nb1, nb2, nb1 + nb2);
      break;

    case '-':
      printf("La soustraction de %d et de %d est de %d\n", nb1, nb2, nb1 - nb2);
      break;

    case '/':
      printf("La puissance de %d/%d est de %d\n", nb1, nb2, nb1 / nb2);
      break;

    case '*':
      printf("Le produit de %d et de %d est de %d\n", nb1, nb2, nb1 * nb2);
      break;

    case '^':
      printf("La puissance de %d^%d est de %.0f\n", nb1, nb2, pow(nb1, nb2));
      break;

    case '%':
      printf("Le resultat de %d modulo %d est de %d\n", nb1, nb2, nb1 % nb2);
      break;

    case 'a':
      if (nb1 > 0) {
        printf("La valeur absolue de %d est de %d\n", nb1);
        break;
      } else
        printf("La valeur absolue de %d est de %d\n", -nb1);
      break;

      if (nb2 > 0) {
        printf("La valeur absolue de %d est de %d\n", nb2);
        break;
      } else
        printf("La valeur absolue de %d est de %d\n", -nb2);
      break;

    case 'r':
      printf("La puissance de %d et de %d est de : %d et %d\n", nb1, nb2,
             sqrt(nb1), sqrt(nb2));
      break;

    default:
      printf("Erreur\n");
    }
    printf("Tapez '0' pour tout arreter ou tapez nombre au hasard pour "
           "continuer avec une autre operation\n");
    scanf("%d", &answer);
  }
  return 0;
}