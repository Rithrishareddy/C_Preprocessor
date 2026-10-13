#include "header.h"
extern int cnt;
void *macro_replacement(char (*buf)[1000])
{
        int i;
        int j=0;
        int k;
        char name[100][100];
        char value[100][100];
        for(i=0;i<cnt;i++)
        {
                if(strncmp(buf[i],"#define",7)==0)
                {
                        if(sscanf(buf[i],"#define %s %s",name[j],value[j])==2)
                        {
                        j++;
                        }
                }
        }
        for(i=0;i<cnt;i++)
        {
                if(strncmp(buf[i],"#define",7)==0)
                {
                        memmove(buf+i,buf+i+1,(cnt-i-1)*1000);
                        cnt--;
                        buf=realloc(buf,cnt*1000);
                        i--;
                }

                for(k=0;k<j;k++)
                {
                        int l1=strlen(name[k]);
                        int l2=strlen(value[k]);
                        char *p=buf[i];
                        int m;
                        while(p=strstr(p,name[k]))
                        {
                                m=p-buf[i];
                                if(l2>l1)
                                {
                                        if((buf[i]+m)!=p)
                                        {
                                                p=buf[i]+m;
                                        }
                                                memmove(p+l2,p+l1,strlen(p+l1)+1);
                                }
                                else if(l2<l1)
                                {
                                        memmove(p+l2,p+l1,strlen(p+l1)+1);
                                }
                                memcpy(p,value[k],l2);
                                p=p+l2;
                        }
                }
        }
        return buf;
}
