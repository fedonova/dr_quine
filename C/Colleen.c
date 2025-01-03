#include <stdio.h>

/*
Comment 1
*/

void print_str(void)
{
	char *str = "#include <stdio.h>%c%c/*%cComment 1%c*/%c%cvoid print_str(void)%c{%c%cchar *str = %c%s%c;%c%cprintf(str, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10);%c}%c%cint main(void)%c{%c%c/*%c%cComment 2%c%c*/%c%cprint_str();%c%creturn 0;%c}";
	printf(str, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, str, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10);
}

int main(void)
{
	/*
	Comment 2
	*/
	print_str();
	return 0;
}