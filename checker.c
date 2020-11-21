#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int gtline(void);
int checker(char u, char y, int d, int outp);
char line[MAX];
int nline;

main() {
  int d, s;
  d = s = 0;
  nline = 0;
  while ((d = gtline()) > 0) {
    checker('(', ')', d, 1);
    checker('[', ']', d, 1);
    checker('\'', '\'', d, 1);
    checker('"', '"', d, 1);
    s = checker('{', '}', d, 0) + s;
  }
  if (s > 0)
    printf("missing %d }", s);

  else if (s < 0)
    printf("missing %d {", abs(s));
}

int checker(char u, char y, int d, int out) {
  int i, j, p, c, r, s;
  int pos[d];
  for (i = 0; i <= d; ++i)
    pos[i] = 1;
  p = c = s = 0;

  for (i = 0; i <= d; ++i) {
    if (line[i] == u) {
      ++p;
      r = 1;
      for (j = i; j <= d && u != y; ++j) {
        if (line[j] == y && pos[j]) {
          c = j;
          pos[j] = 0;
          --p;
          r = 0;
          break;
        }
      }
    } else if (line[i] == y && (c != i || i == 0) && u != y && pos[i]) {
      ++p;
      pos[i] = 0;
      s = 1;
    }
  }
  if (u == y && p > 0 && p % 2 != 0) {
    if (out == 1) {
      printf("%d (%c) Punctuation is missing in line %d\n", p % 2, u, nline);
    }
  }

  else if (p > 0 && u != y) {
    if (s) {
      if (out == 1)
        printf("%d '%c' missing in line %d\n", p, u, nline);
      return -p;
    } else if (r) {
      if (out == 1)
        printf("%d '%c' missing in line %d\n", p, y, nline);
      return p;
    } else
      return 0;
  } else
    return 0;
}

int gtline(void) {
  int i, c;
  for (i = 0; i < MAX - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++nline;
    ++i;
  }
  line[i] = '\0';
  return i;
}
