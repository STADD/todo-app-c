#include "function.h"

void printUsage()
{
    FILE *file;
    file = fopen("manual.txt", "r");

    char printLine[100];
    while(!feof(file)) {
        fgets(printLine, 100, file);
        puts(printLine);
    }
    fclose(file);
}

void listTask(char** argv)
{
    if(!strcmp(argv[1], "-l")) {
        FILE *file;
        file = fopen("tasks.txt", "r");

        char printLine[100];
        while(!feof(file)) {
            fgets(printLine, 100, file);
            if(strcmp(printLine, NULL)){
               puts(printLine);
            } else {
                printf("NO");
            }

        }
        fclose(file);

    }
}
