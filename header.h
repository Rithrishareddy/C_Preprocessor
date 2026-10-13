#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void * readFromFile(char *filename);
void * remove_comments(char (*buf)[1000]);
void *headerfile_inclusion(char (*lines)[1000]);
void *macro_replacement(char (*buf)[1000]);
void writeToFile(char *filename,char (*lines)[1000]);

