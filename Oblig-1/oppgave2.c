#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Oblig 1 - Oppgave 2

// b) Funksjon som tar inn en char-peker og som returnerer summen av den innsendte
// strengen. Vi deﬁnerer at a (og derfor også A) har verdien 1, b har verdien 2, osv.
// Dersom stringen inneholder en karakter som ikke er en stor eller liten bokstav
// skal funksjonen returnere -1.
int stringsum(char* s) {
  int sum = 0;
  int i = 0;
  while (s[i] != '\0') {
    if (s[i] >= 'a' && s[i] <= 'z') {
      sum += 1 + s[i] - 'a';
      i++;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      sum += 1 + s[i] - 'A';
      i++;
    } else {
      sum = -1;
      break;
    }
  }
  printf("%d\n", sum);
  return sum;

}

// f) Funksjon som ikke returnerer noen verdi, men som legger resultatet av utregningen
// (strengsummen) i int-en pekt på av res.
void stringsum2(char *s, int *res) {
  int sum = stringsum(s);
  *res = sum;
}

// c) Funksjon som tar inn en char-peker og en char som argumenter, og returnerer
// avstanden i antall tegn mellom første og andre forekomst av karakteren c i
// strengen s. Dersom c forekommer færre enn 2 ganger i teksten (som gjør det
// umulig å ﬁnne avstanden mellom to), skal funksjonen returnere -1.
int distance_between(char *s, char c) {
  int i = 0;
  int dist = 0;

  while (s[i] != '\0') {
    if (s[i] == c) {
      i++;
      while (s[i] != '\0') {
        dist++;
        if (s[i] == c) {
          return dist;
          break;
        }
        i++;
      }
      return -1;
    } else {
      i++;
    }
  }
  return -1;
}

// d) Funksjon som tar inn en char-peker og en char som argumenter, og returnerer
// en ny streng som er den som er mellom første og andre forekomst av karakteren c
// i strengen s. Dersom c forekommer færre enn 2 ganger i teksten (som gjør det
// umulig ˚a ﬁnne avstanden mellom to), skal funksjonen returnere NULL.
char *string_between(char *s, char c) {
  int i = 1;
  char* str = malloc(strlen(s) + 1);

  while (s[i] != '\0') {
    if (s[i] == c) {
      i++;
      int n = 0;
      while (s[i] != 0) {
        if (s[i] == c) {
          return str;
          break;
        } else {
          str[n] = s[i];
          n++;
        }
        i++;
      }
    } else {
      i++;
    }
  }
}

static void logger(int passed, char *s);

static void test_stringsum(char *input, int expected);

static void test_distance_between(char *str, char c, int expected);

static void test_string_between(char *str, char c, const char *expected);

static void test_stringsum2(char *input, int expected);
