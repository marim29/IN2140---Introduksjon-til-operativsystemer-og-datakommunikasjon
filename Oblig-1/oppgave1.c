// Oblig 1 - oppgave 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *main() {

  char array[10];
  char *newArray = malloc(strlen(array) + 1);
  char let1;
  char let2;

  printf("Ord: \n");
  scanf("%s", array);

  printf("Bokstav1: \n");
  scanf(" %c", &let1);

  printf("Bokstav2: \n");
  scanf(" %c", &let2);

  int i = 0;
  while (array[i] != '\0') {
    if (array[i] == let1) {
      newArray[i] = let2;
    } else {
      newArray[i] = array[i];
    }
    i++;
  }
  newArray[i] = 0;
  printf(newArray);
  return 0;
}
