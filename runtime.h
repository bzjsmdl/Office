#ifndef RUNTIME_H
#define RUNTIME_H

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char* strrep(const char* text, char need_replace_char, char replace_char);
void clear(void* pointer, int count);


#endif