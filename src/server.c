//
// Created by Anastasia Andreeva
//

// Implementation of interface.h functions

#include "interface.h"
#include "stddef.h"
#include <string.h>

void reverseWords(char* str) {
	int i, j, len = strlen(str);
	char temp;

	// reverse the whole string
	for (i = 0, j = len - 1; i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	// reverse each word in the string
	for (i = 0, j = 0; i <= len; i++) {
		if (str[i] == ' ' || str[i] == ',' || str[i] == '\0') {
			int k;
			for (k = j, j = i - 1; k < j; k++, j--) {
				temp = str[k];
				str[k] = str[j];
				str[j] = temp;
			}
			j = i + 1;
		}
	}
}