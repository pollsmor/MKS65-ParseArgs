#include <stdio.h>
#include <string.h>
#include <unistd.h>

//Returns a list of arguments
char ** parse_args(char * line) {
  char * output[5];
  char *curr = line;
  int i = 0;
  while (curr != NULL) {
    output[i] = strsep(&curr, " ");
    i++;
  }

  return output;
}

int main() {
  char line[100] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);

  return 0;
}