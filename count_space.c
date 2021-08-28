//Q1 count tabs space and new lines
//Q2 replace each string of one or more blanks by a single blank
//Q3 replace each tab => \t, backspace => \b, backslash => \\ and print
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {

int size = 0; // size of array.
int i = 0;
int tab = 0, space = 0, newl = 0;
int limit = 0;
//User enters size of array
printf("Enter size of array please.\n");
scanf("%d", &size);

limit = sizeof(char)*size; // end of array

char *array = (char*)malloc(sizeof(char)*size); //
// user enters a sentence.
printf("<To exit the program please enter \" ` \"!> \n");
printf("Enter a sentence please.\n=>"); 
scanf(" %[^\`]s", array);

// prints sentence
printf("\t<Printed result!>");
printf("\n--------------------------------\n");
for(i=0; i<size; i++)
printf("%c", array[i]);
printf("\n--------------------------------\n");

// counts tabs space and new line
for(i=0; i<size; i++){
	if(array[i] == '\t')
		++tab;
	if(array[i] == ' ')
		++space;
	if(array[i] == '\n')
		++newl;
}
// show the last character in the array
printf("\n  <Last character in the array>");
printf("\n--------------------------------\n");
printf("array[%d] = %c",limit - 1, array[limit - 1]);
printf("\n--------------------------------\n");
//show the counted results
printf("\n\n  <Tabs,Space,New Line Count>");
printf("\n--------------------------------\n");
printf("tabs = %d\nspace = %d\nnewline = %d", tab, space, newl);
printf("\n--------------------------------\n");

/*
//test for printing input result.
for(i=0; i<size; i++)// test array values
printf("array[%d] = %c \n", i, array[i]);
*/
int j = 0;
// changes multiple spaces to one space
for(i=0; i <limit-1; i++){
	if(array[i] == ' ' && array[i+1] == ' ')
	 for(j=i; j<limit-1; j++)
	 array[j] = array[j+1];
}

printf("\n\n  <Deleted more than two spaces>");
printf("\n--------------------------------\n");
for(i=0; i<size; i++)// test array values
printf("array[%d] = %c \n", i, array[i]);

free(array);
	return 0;
}
