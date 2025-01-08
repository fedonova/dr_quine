#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/*
  Ceci n'est pas une pipe
*/
#define COPY		"#include <fcntl.h>%1$c#include <stdio.h>%1$c#include <stdlib.h>%1$c/*%1$c  Ceci n'est pas une pipe%1$c*/%1$c#define COPY		%2$c%3$s%2$c%1$c#define CLONE(kid)	dprintf(kid,COPY,10,34,COPY)%1$c#define FT 			int main() { int kid = open(%2$cGrace_kid.c%2$c, O_WRONLY | O_CREAT | O_TRUNC, 0644); if (kid < 0) { exit(1); }; CLONE(kid); return 0; }%1$cFT"
#define CLONE(kid)	dprintf(kid,COPY,10,34,COPY)
#define FT 			int main() { int kid = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0644); if (kid < 0) { exit(1); }; CLONE(kid); return 0; }
FT