/*
commentaire
*/
#include <stdio.h>
# define SOURCE_FILE "Grace_kid.c"
# define SOURCE_CODE "/*%ccommentaire%c*/%c#include <stdio.h>%c# define SOURCE_FILE %cGrace_kid.c%c%c# define SOURCE_CODE %c%s%c%c# define FT(x) int main() %c%c{FILE *fd;%c%cfd = fopen(x, %cw%c);%c%cfprintf(fd, SOURCE_CODE, 10, 10, 10, 10, 34, 34, 10, 34, SOURCE_CODE, 34, 10, 9, 10, 34, 34, 10);%c%cfclose(fd);}%cFT(SOURCE_FILE)%c"
# define FT(x) int main() \
{FILE *fd; \
fd = fopen(x,"w"); \
fprintf(fd,SOURCE_CODE,10,10,10,10,34,34,10,34,SOURCE_CODE,34,10,92,10,92,10,34,34,92,10,92,10,10,10); \
fclose(fd);}
FT(SOURCE_FILE)
