/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/


#include <stdio.h>

int main(){
  char s[100];
  printf("Please give string: ");
  scanf("%[^\n]", s);

  int len = 0;

  while(s[len]!='\0'){
    len++;
  }

  for(int i = 0; i < len; i++){
    printf("%c\n", s[i]);
  }


  return 0;
}
