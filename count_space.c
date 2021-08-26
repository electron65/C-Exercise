#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int size = 0; // size of array.
int i = 0;

printf("Enter size of array please.\n");
scanf("%d", &size);

char *array = (char*)malloc(sizeof(char)*size); //

printf("Enter a sentence please.\n=>"); // user enters a sentence.
scanf("% [^\n]s", array);

/*
printf("=>");
for(i=0; i<size; i++)// prints sentence
printf("%c", array[i]);
*/
for(i=0; i<size; i++)
printf("array[%d] = %c \n", i, array[i]);

free(array);
	return 0;
}
