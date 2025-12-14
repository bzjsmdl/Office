#include "runtime.h"
char* strrep(const char* text, char need_replace_char, char replace_char){
    char* test = (char*)malloc(strlen(text) + 1);
    strcpy(test, text);
    int i = 0;
    while (*(test + i) != '\0'){
        if (*(test + i) == need_replace_char) *(test + i) = replace_char;
        i++;        
    }
    return (test);
}

void clear(void* pointer, int count){
    for (size_t i = 0; i < count; i++) *((char*)pointer + i) = 0;
}

