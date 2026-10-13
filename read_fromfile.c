#include"header.h"
extern int cnt;
void * readFromFile(char *filename)
{       cnt=0;
        char (*line)[1000]=NULL;
        FILE *fp;
        char str[1000];
        fp=fopen(filename,"r");
        if(fp==NULL)
        {
                printf("%s is not found\n",filename);
                exit(0);
        }
        while(fgets(str,1000,fp))
        {
                line=realloc(line,(cnt+1)*1000);
                strcpy(line[cnt],str);
                cnt++;

        }
        fclose(fp);
        return line;
}
