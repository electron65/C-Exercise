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

char *array = (char*)malloc(sizeof(char)*size); 
char *temp = (char*)malloc(sizeof(char)*size); // copied array
// user enters a sentence.
printf("\n--------------------------------\n");
printf("<To exit the program please enter \" ` \"!> \n");
printf("Enter a sentence please.");
printf("\n--------------------------------\n");
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
printf("\n  <Tabs,Space,New Line Count>");
printf("\n--------------------------------\n");
printf("tabs = %d\nspace = %d\nnewline = %d", tab, space, newl);
printf("\n--------------------------------\n");

int j = 0;
int flag = 0; // signal which indicates a space in an array
int blankc = 0; //counts how many spaces are omitted in the copied array
for(i=0; i<limit; i++){
		// when the value is not a space
		if(array[i] != ' '){ 
			temp[j] = array[i];
			j++;
			printf("|Not a space|");
			flag = 0;
		}
		// when a value is a space
		else{
			//when a value is a space and the previous value was also an space
			if(flag == '1'){
				printf("|2nd 0|");
				blankc++;
				}	
			else{
				// indication of a space
				temp[j] = array[i];
				j++;
				printf("|1st space|");
				}

			}		
	}



printf("\n--------------------------------\n");
printf("  <One space array>");
printf("\n--------------------------------\n");
for(i=0; i<size; i++)// test array values
printf("%c", temp[i]);


printf("\n<Test Array>\n");
for(i=0; i<size; i++)// test array values
printf("temp[%d] = %c \n", i, temp[i]);

free(array); //free memory
	return 0;
}
