/*
	1
*/
#include <stdio.h>
#define FILE_NAME "Grace_kid.c"
#define STR "/*%c	1%c*/%c#include <stdio.h>%c#define FILE_NAME %cGrace_kid.c%c%c#define STR %c%s%c%c#define FT(x) int main(){FILE *fd; fd = fopen(x, %cw%c);fprintf(fd, STR,10,10,10,10,34,34,10,34,STR,34,10,34,34,10,10);fclose(fd);}%cFT(FILE_NAME)%c"
#define FT(x) int main(){FILE *fd; fd = fopen(x, "w");fprintf(fd, STR,10,10,10,10,34,34,10,34,STR,34,10,34,34,10,10);fclose(fd);}
FT(FILE_NAME)
