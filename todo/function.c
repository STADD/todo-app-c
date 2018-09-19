#include "function.h"

void printUsage(char** argv)
{
    if(argv[1] == NULL) {
        FILE *file;
        file = fopen("manual.txt", "r");

        char printLine[100];
        while(!feof(file)) {
            fgets(printLine, 100, file);
            puts(printLine);
        }
        fclose(file);
    }
}

void listTask(char** argv)
{
    if(!strcmp(argv[1], "-l")) {
        FILE *file;
        file= fopen("todo.txt", "r");
        char printLine[100];
        int temp = 1;

        while(fgets(printLine, 100, file) != NULL) {
            printf("%d - %s", temp, printLine);
            temp++;
        }

        if(temp == 1) {
            printf("No todos for today! :)");
        }
        fclose(file);
    }
}

void addTask(char** argv)
{
    if(!strcmp(argv[1], "-a")) {
        char* printLine;

        FILE *file;
        file = fopen("todo.txt", "a");

        fprintf(file, "%s\n", argv[2]);
        printf("Task [%s] added!\n", argv[2]);

        fclose(file);
    }
}

void delTask(char** argv)
{
    if(!strcmp(argv[1], "-r")) {
        FILE *file;
        file= fopen("todo.txt", "w");
    }
}
