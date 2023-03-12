#ifndef INTERFACE_H
#define INTERFACE_H

#include "stddef.h"

// This function is used in main.c client file. Implementation is in
// server.c server file

// reverseWords
// Function reverses the whole string and then reverses each word in the string
// Arguments:
//    str - string in which to reverse all the words

void reverseWords(char* str);

#endif