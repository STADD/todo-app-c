#include "function.h"

int main(int argc, char** argv)
{
    //printf("%s", argv[1]);

    listTask(argv);
    addTask(argv);
    printUsage(argv);
    delTask(argv);

    return 0;
}
