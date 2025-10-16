#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
  if (argc < 1){
    perror("Please, insert the file name.\n");
    return -1;
  }

  FILE *fptr = fopen(argv[1], "w");
  if (fptr == NULL){
    perror("Could not open the file, please try again later.\n")
  }


}
