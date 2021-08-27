//Q1 count tabs space and new lines
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int size = 0; // size of array.
int i = 0;
int tab = 0, space = 0, newl = 0;
printf("Enter size of array please.\n");
scanf("%d", &size);

char *array = (char*)malloc(sizeof(char)*size); //

printf("Enter a sentence please.\n=>"); // user enters a sentence.
while(1){
i = 0;
scanf("%s", array);	

if(array[sizeof(char)*size] == '`' || (i > (sizeof(char)*size)))
	break;	
i++;
}
//scanf(" %[^\n]s", array);
//printf("TEST\n");

printf("\n=>");
for(i=0; i<size; i++)// prints sentence
printf("%c", array[i]);

// counts tabs
for(i=0; i<size; i++){
	if(array[i] == '\t')
		tab++;
	if(array[i] == ' ')
		space++;
	if(array[i] == '\0')
		newl++;
}

//show the counted results
printf("\n-----------------------------\n");
printf("\ntabs = %d\nspace = %d\nnewline = %d", tab, space, newl);
printf("\n-----------------------------\n");

for(i=0; i<size; i++)// test array values
printf("array[%d] = %c \n", i, array[i]);


//printf("TEST\n");
free(array);
	return 0;
}
