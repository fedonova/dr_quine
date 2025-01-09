#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)

int		i = 1;

// commentaire

void	compilation() {
	char	command_buff[60];
	sprintf(command_buff, "gcc -Wall -Wextra -Werror Sully_%1$d.c -o Sully_%1$d ; ./Sully_%1$d", i);
	system(command_buff);
}

int	main() {
	if (i >= 0) {
		if (!access("Sully_5.c", R_OK)) i--;
		char	*source = "#include <stdio.h>%1$c#include <fcntl.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c%1$c# define OPEN(f) open(f, O_WRONLY | O_CREAT, 0644)%1$c%1$cint%2$c%2$ci = %4$d;%1$c%1$c// commentaire%1$c%1$cvoid%2$ccompilation() {%1$c%2$cchar%2$ccommand_buff[60];%1$c%2$csprintf(command_buff, %3$cgcc -Wall -Wextra -Werror Sully_%%1$d.c -o Sully_%%1$d ; ./Sully_%%1$d%3$c, i);%1$c%2$csystem(command_buff);%1$c}%1$c%1$cint%2$cmain() {%1$c%2$cif (i >= 0) {%1$c%2$c%2$cif (!access(%3$cSully_5.c%3$c, R_OK)) i--;%1$c%2$c%2$cchar%2$c*source = %3$c%5$s%3$c;%1$c%2$c%2$cchar%2$csource_name[10];%1$c%2$c%2$csprintf(source_name, %3$cSully_%%d.c%3$c, i);%1$c%2$c%2$cdprintf(OPEN(source_name),source,10,9,34,i,source);%1$c%2$c%2$cif (i > 0) compilation();%1$c%2$c}%1$c%2$creturn(0);%1$c}%1$c";
		char	source_name[10];
		sprintf(source_name, "Sully_%d.c", i);
		dprintf(OPEN(source_name),source,10,9,34,i,source);
		if (i > 0) compilation();
	}
	return(0);
}
