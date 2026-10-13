#include "header.h"
extern int cnt;
void writeToFile(char *filename,char (*lines)[1000])
{
        FILE *fp;
        int i;
        int flag=0;
        char str[20];
        char str1[20]="i";
       // printf("%d",cnt);
        for(i=0;filename[i];i++)
        {
                if(filename[i] == '.')
                {
                        break;
                }
        }
        strncpy(str,filename,i+1);
        strcat(str,str1);
        fp=fopen(str,"w");
        for(i=0;i<cnt;i++)
           fputs(lines[i],fp);
        fclose(fp);
}
