//
// Created by Anastasia Andreeva
//

// Client file

#include "interface.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
  char str[100];
  for (int i = 1; i < argc; i++){
      strcat(str, argv[i]);
      strcat(str, " ");
  }
	reverseWords(str);
	printf("%s", str);
	return 0;
}
