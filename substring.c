#include <string.h>
#include <stdio.h>

void substring(char *sub, char *text) {
    int m = strlen(sub);
    int n = strlen(text);
    int i, j;
    int count = 0;
   for (j = 0; j <= n - m; ++j) {
      for (i = 0; i < m && sub[i] == text[i + j]; ++i);
      if (i >= m)
        count++;
   }
   printf("%i\n", count);
}

int main() {
    substring("la", "lalallala");
     return 0;
}
