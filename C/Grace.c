#include <stdio.h>
/*
Salut !
*/
#define SOURCE_FILE "Grace_kid.c"
#define SOURCE_CODE "#include <stdio.h>%c/*%cSalut !%c*/%c#define SOURCE_FILE %cGrace_kid.c%c%c#define SOURCE_CODE %c%s%c%c#define FT(x) int main(){FILE *fd = fopen(x, %cw%c);if (fd == NULL) return 0;if (fprintf(fd, SOURCE_CODE,10,10,10,10,34,34,10,34,SOURCE_CODE,34,10,34,34,10,10) < 0) return(0);if (fclose(fd) == -1) return(0);}%cFT(SOURCE_FILE)%c"
#define FT(x) int main(){FILE *fd = fopen(x, "w");if (fd == NULL) return 0;if (fprintf(fd, SOURCE_CODE,10,10,10,10,34,34,10,34,SOURCE_CODE,34,10,34,34,10,10) < 0) return(0);if (fclose(fd) == -1) return(0);}
FT(SOURCE_FILE)
