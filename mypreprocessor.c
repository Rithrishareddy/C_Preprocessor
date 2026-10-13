#include "header.h"
int cnt=0;
int main(int argc,char *argv[])
{
        char (*lines)[1000]=NULL;
        char (*newline)[1000]=NULL;
        if(argc!=2)
        {
                printf("Invalid inputs\n");
                exit(0);
        }
        lines=readFromFile(argv[1]);
        lines=remove_comments(lines);
        lines=macro_replacement(lines);
        lines=headerfile_inclusion(lines);
        writeToFile(argv[1],lines);
}
