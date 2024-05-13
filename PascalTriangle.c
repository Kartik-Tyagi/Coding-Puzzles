#include <stdio.h>

int main(void) {
  int rows;

  do {
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows >= 0 && rows <= 13) {
      triangle(rows);
    }
  } while (rows >= 0 && rows <= 13);

  return 0;
}

void triangle(int x) {
  for (int i = 1; i <= x; i++) {
    for (int j = (x - i); j >= 1; j--) {
      printf ("   ");
    }
    printf ("%d", choose((i - 1),0));
    if (x > 1) {
      for (int j = 1; j <= (i - 1); j++) {
        if (choose((i - 1),(j - 1)) >= 100) {
            printf ("   %d", choose((i - 1),j));
        } else if (choose((i - 1),(j - 1)) >= 10) {
            printf ("    %d", choose((i - 1),j));
        } else {
            printf ("     %d", choose((i - 1),j));
        }
      }
    }
    printf ("     \n");
  }
}

int choose(int n, int r) {
  int C = factorial(n) / (factorial(r) * factorial(n - r));
  return C;
}

int factorial(int n) {
  int nfact = 1;
  for (int i = 1; i <= n; i++) {
    nfact = nfact * i;
  }
  return nfact;
}