#include <stdio.h>
#include "Option.h"

decl_Option(int);
def_Option(int);

int main() {
	Option_int opt_i32 = Option_int_new(None, 0);

	switch (opt_i32.option)
	{
	case Some:
		printf("value is %d", opt_i32.value);
		break;
	case None:
		printf("value is None");
		break;
	}
	return 0;
}