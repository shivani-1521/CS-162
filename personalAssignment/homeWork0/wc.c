


#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<ctype.h>
/*typedef for long unsighned int*/

typedef unsigned long count;

/*initiate  counts and total counts of  the number of lines, words, and characters */

count numOfLines;
count numOfWords;
count numOfChar;

count TotnumOfLines = 0;
count TotnumOfWords = 0;
count TotnumOfChar = 0;


/*output counters for given file */
/*static : No object is required to call this method.*/

void report (char *file, count numOfLines, count numOfWords, count numOfChar){

	printf("%6lu %6lu %6lu %s \n", numOfLines, numOfWords, numOfChar, file);
}

/*return num if c is valid word constituent*/
/*return 0 if c is not valid word constituent*/

static int isword(unsigned char c){
	

	return isalpha(c);
}

/*increase char counter and next line counter*/

#define COUNT(c)             \
	numOfChar++;         \
	if((c) == '\n')      \
		numOfLines++;

/*get next word , return 0 on eof or error, 1 otherwise*/

int getword(FILE *fp){

	int c;
	int word = 0;
	if(feof(fp))
		return 0;

	while((c = getc(fp)) != EOF){
		if(isword(c)){
			numOfWords++;
			break;
		} 

		COUNT(c);
	}

	/*....*/
	for(; c != EOF; c = getc(fp)){
		COUNT(c);
		if(!isword(c))
			break;
	}

	return c != EOF;
}

/*process file FILE*/

void counter(char *file){
	FILE *fp = fopen(file, "r");

	/*...*/
	if(!fp)
		printf("cannot open file ");

	numOfChar = numOfWords = numOfLines = 0;

	/*...*/
	while(getword(fp)){
		;
	}

	fclose(fp);

	report(file, numOfLines, numOfWords, numOfChar);

	TotnumOfChar += numOfChar;
	TotnumOfWords += numOfWords;
	TotnumOfLines += numOfLines;

}

/*driver func*/

int main(int argc, char **argv){
	int i;
	if(argc < 2)
		printf("error\n");

	for(i = 1; i < argc; i++){
		counter(argv[i]);
	}

	/*if(argc > 2)
		report("total numOfChar, numOfWords, numOfLines", TotnumOfChar, TotnumOfWords, TotnumOfLines);*/

	return 0;
}
