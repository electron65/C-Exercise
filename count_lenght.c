//Q1 count the lenghts of the words in its input and draw a horizontal histogram
//Q2 print a histogram of frequencies of different characters in the input.
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//structure for counting numbers
struct count {
	int num[10];
};
	

int main(int argc, char *argv[]) {
	
	struct count n; // structure
	int size;//size of array
	int length = 0;// lenght of a word
	int i = 0;
	printf("Enter size of array please.\n");
	scanf("%d", &size);

	char * array = (char*)malloc(sizeof(char)*size); // malloc
	for(i=0; i<10; i++)
		n.num[i] = 0; // initalize the array.
		
	for(i=0; i<10; i++){ // print initialized array
		printf("n.num[%d] = %d\n",i,n.num[i]);
	}
	
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
	
	//count the length of the words
	for(i=0; i<size; i++){
		if(array[i] != ' '){
		length++;
		printf("L = %d", length);
		}
		else if(array[i] == ' '){
			if(length == '1'){
				n.num[0] =+ 1;
				length = 0; // to count again, the length variable must be allocated back to zero
			}
			else if(length == '2'){
				n.num[1] =+ 1;
				length = 0;
			}
			else if(length == '3'){
				n.num[2] =+ 1;
				length = 0;
			}
			else if(length == '4'){
				n.num[3] =+ 1;
				length = 0;
			}
			else if(length == '5'){
				n.num[4] =+ 1;
				length = 0;
			}
			else if(length == '6'){
				n.num[5] =+1;
				length = 0;
			}
			else if(length == '7'){
				n.num[6] =+1;
				length = 0;
			}
			else if(length == '8'){
				n.num[7] =+1;
				length = 0;
			}
			else if(length == '9'){
				n.num[8] =+ 1;
				length = 0;
			}
			else if(length >= '10'){
				n.num[9] =+ 1;
				length = 0;
			}
		}
		
	}
		printf("L = %d", length);
		n.num[0] =+ 1;
	for(i=0; i<10; i++){ // print initialized array
		printf("n.num[%d] = %d\n",i,n.num[i]);
	}
	return 0;
}
