#include <stdio.h>
#include <string.h>

int main() {
  //Strcpy
  char str1[] = "Sample Text";
  char str2[40];
  char str3[40];

  strcpy(str2, str1);
  strcpy(str3, "Well done");

  printf("Str1: %s\nStr2: %s\nStr3: %s\n", str1, str2, str3);

  //Strncpy
  char s1[] = "Oh Hi Mark";
  char s2[40];
  char s3[40];

  //Copies the full size of s1 to s2
  strncpy( s2, s1, sizeof(s2) );

  //Only copy 5 characters
  strncpy( s3, s2, 5);
  s3[5] = '\0';

  printf("S1: %s\nS2: %s\nS3: %s\n", s1, s2, s3);
  return 0;
}
