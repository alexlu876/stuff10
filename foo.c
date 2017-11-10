#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

char ** parse_args(char * line){
  char * s1 = line;
  char ** args = calloc(5, sizeof(char *));;
  int i = 0;
  while(i<5){
    args[i] = strsep(&s1, " ");
    i++;
  }
  return args;
}

int main(){
  char test[] = "ls";
  printf("%s\n", test);
  char ** args = parse_args(test);
  execvp(args[0], args);
}

