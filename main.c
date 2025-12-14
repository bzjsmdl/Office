#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "runtime.h"
int main(int argc, char const *argv[])
{   
    if (argc == 1){
        printf("---------------Office---------------\nVersion:         alpha0.1.0\nMaintainer:         bzjsmdl(email:bzjsmdl88@qq.com)\n");
        printf("Thank you for your downloading ang using!\n");
        printf("Type \"help\" for assistance.");
        return 1;
    }
    if (strcmp(argv[1], "help") == 0){
        printf("size        Get the size of a file      \"size\" <file>\n");
        printf("head        Output the first N lines of the file (default 10 lines)       \"head\" <file> [line]\n");
    }
    if (strcmp(argv[1], "size") == 0){
        if (argc > 3){
            printf("Error! The argument list is too more (%d > 3).", argc);
            return 1;
        }
        if (argc <= 2){
            printf("Error! The argument list is too few (%d <= 2).", argc);
            return 1;
        }
        
        FILE* f = fopen(argv[2], "rb");
        if (f == NULL){
            printf("Error! Cannot open %s.", argv[2]);
            return 1;
        }
        
        fseek(f, 0, SEEK_END);
        long len = ftell(f);
        fseek(f, 0, SEEK_SET);
        fclose(f);
        printf("The file'size is %ld byte(s)", len);
        return 0;
    }

    else if (strcmp(argv[1], "head") == 0){
        if (argc > 4){
            printf("Error! The argument list is too more (%d > 4).", argc);
            return 1;
        }
        
        if (argc < 3){
            printf("Error! The argument list is too few (%d < 3).", argc);
            return 1;
        }
        FILE* f = fopen(argv[2], "r");
        if (f == NULL){
            printf("Error! Cannot open %s.", argv[2]);
            return 1;
        }

        char buffer[4096];

        if (argv[3] == NULL){
            printf("This's %s's lines 1 to 10:\n", argv[2]);
            for (size_t i = 1; i < (10 + 1); i++){
                fgets(buffer, 4096, f);
                printf("%d: %s", i, buffer);
                clear(buffer, 4096);
            }
        }else{
            printf("This's %s's lines 1 to %s:\n", argv[2], argv[3]);
            for (size_t i = 1; i < (atoi(argv[3]) + 1); i++){
                fgets(buffer, 4096, f);
                printf("%d: %s", i, buffer);
                clear(buffer, 4096);
            }
        }
        clear(buffer, 4096);
        fclose(f);
        return 0;
    }
    else{
        printf("Sorry! Please provide a valid command!");
        return 1;
    }
    return 1;
}
