#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)

int i = -1;
/*
Salut !
*/
void compilation() {
    char command_buff[60];
    if (sprintf(command_buff, "gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i) < 0) return;
    if (system(command_buff) < 0) return;
}

int main() {
    if (i >= 0) {
        if (strchr(__FILE__, '_') != NULL) i--;
        if (i < 0) return(0);
        char *source = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#include <unistd.h>%1$c%1$c# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)%1$c%1$cint i = %3$d;%1$c/*%1$cSalut !%1$c*/%1$cvoid compilation() {%1$c    char command_buff[60];%1$c    if (sprintf(command_buff, %2$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%2$c, i) < 0) return;%1$c    if (system(command_buff) < 0) return;%1$c}%1$c%1$cint main() {%1$c    if (i >= 0) {%1$c        if (strchr(__FILE__, '_') != NULL) i--;%1$c        if (i < 0) return(0);%1$c        char *source = %2$c%4$s%2$c;%1$c        char source_name[10];%1$c        if (sprintf(source_name, %2$cSully_%%d.c%2$c, i) < 0) return(0);%1$c        int fd = OPEN(source_name); if (fd == -1) return(0);%1$c        if (dprintf(OPEN(source_name),source,10,34,i,source) < 0) return(0);%1$c        if (i >= 0) compilation();%1$c        if (close(fd) == -1) return (0);%1$c    }%1$c    return(0);%1$c}%1$c";
        char source_name[10];
        if (sprintf(source_name, "Sully_%d.c", i) < 0) return(0);
        int fd = OPEN(source_name); if (fd == -1) return(0);
        if (dprintf(OPEN(source_name),source,10,34,i,source) < 0) return(0);
        if (i >= 0) compilation();
        if (close(fd) == -1) return (0);
    }
    return(0);
}
