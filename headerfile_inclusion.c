#include"header.h"
extern int cnt;
void *headerfile_inclusion(char (*lines)[1000])
{
        int count=cnt;
        char (*newlines)[1000]=NULL;
        FILE *fptr;
        int j=0;
        char ptr[1000];
        char h[100]="#include<stdio.h>\n";

        for(int i=0;i<count;i++)
        {
                if(strcmp(lines[i],h)==0)
                {
                     fptr = fopen("/usr/include/stdio.h", "r");
                     if(fptr==NULL)
                     {
                             printf("file not found\n");
                             fclose(fptr);
                              exit(0);
                     }
                     while(fgets(ptr,1000,fptr))
                     {

                             newlines=realloc(newlines,(j+1)*1000);
                             strcpy(newlines[j],ptr);
                             j++;
                     }
                     fclose(fptr);
                }
                else
                {
                        newlines=realloc(newlines,(j+1)*1000);
                        strcpy(newlines[j],lines[i]);
                        j++;

                }

        }
        cnt=j;
        return newlines;

}
