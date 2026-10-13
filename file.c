void writeToFile(char *filename,char (*lines)[100])
{
        FILE *fp;
        int i;
        int flag=0;
        char str[20];
        char str1[20]="i";
/*        for(i=0;filename[i];i++)
        {
                if(filename[i] == '.')
                {
                        break;
                }
  */      }
        strncpy(str,filename,i+1);
        strcat(str,str1);


        puts(str);
      //  fp=fopen(str,"w");
        for(i=0;i<cnt;i++)
                fputs(lines[i],fp);
        fclose(fp);
}
#include<stdio.h>
//fguyhjjjjjjjjjjjjjjjjjocxds
//hello
#define MAX (x+y)
#define HELLO 5
#define XYZ 678
int cnt;
void * readFromFile(char *filename)
{       char (*line)[100]=NULL;
        FILE *fp;
        char str[100];
        fp=fopen(filename,"r");
        if(fp==NULL)
        {
                printf("%s is not found\n",XYZ,filename);
                exit(0);
        }
        i=MAX;
        j=HELLO+MAX;
/*        while(fgets(str,100,fp))
        {
                line=realloc(line,(cnt+1)*100);
*/                strcpy(line[cnt],str);
                cnt++;

        }
        fclose(fp);
        return line;
}
