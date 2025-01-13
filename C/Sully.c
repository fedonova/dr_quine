#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)

int i = 5;

// commentaire

void compilation() {
    char command_buff[60];
    sprintf(command_buff, "gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
    system(command_buff);
}

int main() {
    if (i >= 0) {
        if (!access("Sully_5.c", R_OK)) i--;
        char *source = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c%1$c# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)%1$c%1$cint i = %3$d;%1$c%1$c// commentaire%1$c%1$cvoid compilation() {%1$c    char command_buff[60];%1$c    sprintf(command_buff, %2$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%2$c, i);%1$c    system(command_buff);%1$c}%1$c%1$cint main() {%1$c    if (i >= 0) {%1$c        if (!access(%2$cSully_5.c%2$c, R_OK)) i--;%1$c        char *source = %2$c%4$s%2$c;%1$c        char source_name[10];%1$c        sprintf(source_name, %2$cSully_%%d.c%2$c, i);%1$c        dprintf(OPEN(source_name),source,10,34,i,source);%1$c        if (i > 0) compilation();%1$c    }%1$c    return(0);%1$c}%1$c";
        char source_name[10];
        sprintf(source_name, "Sully_%d.c", i);
        dprintf(OPEN(source_name),source,10,34,i,source);
        if (i > 0) compilation();
    }
    return(0);
}
