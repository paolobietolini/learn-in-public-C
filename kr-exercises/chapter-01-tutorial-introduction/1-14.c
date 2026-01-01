/*
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */
#include <stdio.h>

#define NCHARS 128

int freq[NCHARS] = {0};
int c;
int main(void) {
  while ((c = getchar()) != EOF) {
    if (c >= 0 && c < NCHARS)
      freq[(unsigned char)c]++;
  }
  for (int i = 0; i < NCHARS; i++) {
    if (freq[i] > 0) {
      if (i == ' ')
        printf("SPACE");
      else if (i == '\t')
        printf("TAB");
      else if (i == '\n')
        printf("NL");
      else
        printf("%c", i);
      printf(" -> %i\n", freq[i]);
    }
  }
  return 0;
}