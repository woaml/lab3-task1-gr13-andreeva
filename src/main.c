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
	if (fgets(str, sizeof str, stdin) != NULL) {
		size_t len = strlen(str);
		if (len > 0 && str[len - 1] == '\n') {
			str[--len] = '\0';
		}
	}
	reverseWords(str);
	printf("%s", str);
	return 0;
}

