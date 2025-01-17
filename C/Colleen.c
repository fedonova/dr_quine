#include <stdio.h>

/*
Salut !
*/

void print_source(void)
{
	char *source = "#include <stdio.h>%c%c/*%cSalut !%c*/%c%cvoid print_source(void)%c{%c%cchar *source = %c%s%c;%c%cif (printf(source, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, source, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10) < 0) return;%c}%c%cint main(void)%c{%c%c/*%c%cC'est un commentaire dans la fonction main%c%c*/%c%cprint_source();%c%creturn 0;%c}";
	if (printf(source, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, source, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10) < 0) return;
}

int main(void)
{
	/*
	C'est un commentaire dans la fonction main
	*/
	print_source();
	return 0;
}