#include <stdio.h>

/* Only change any of these 4 values */
#define V0 3
#define V1 3
#define V2 1
#define V3 3

int main(void) {
	int a;
	char *s;

	/* This is a print statement. Notice the little 'f' at the end!
	It might be worthwhile to look up how printf works for your future
	debugging needs... */
	printf("Simple C program:\n====================\n");

	/* for loop */
	for(a=0; a<V0; a++) {
		printf("RU ");
	}
	printf("\n");

	/* switch statement */
	switch(V1) {
		case 0:		printf("Werblin Rec Center\n");
		case 1: 	printf("Busch Campus Center\n");	break;
		case 2: 	printf("Livingston \n");
		case 3: 	printf("Werblin Rec Center\n");		break;
		case 4:		printf("CoRE\n");	break;
		case 5:		printf("ECE\n");
		default:	printf("Hill Center\n");
	}

	/* ternary operator */
	s = (V3==3) ? "Go" : "Boo";

	/* if statement */
	if(V2) {
		printf("\n%s RUTGERS!\n",s);
	} else  {
		printf("\n%s PENN STATE!\n",s);
	}

	return 0;
}