/*
	A simple implementation of Tee
	By Bill Du
*/
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	char chr;
	char input[10];
	int a;
	int index;
	FILE *f[argc];

	// Sets the append flag
	while((chr = getopt(argc, argv, "a")) != EOF){
		switch (chr){
			case 'a':
				a = 1;
				break;
		}
	}
	argc -= optind;
	argv += optind;

	// Open files to append
	for (index = 0; index < argc; index++){
		if(a){
			f[index] = fopen(argv[index], "a");
			fclose(f[index]);
		}
		else{
			f[index] = fopen(argv[index], "w");
			fclose(f[index]);
		}
	}

	// Write to files
	while (scanf("%9[^\n]\n", input) != EOF){
		for(index = 0; index < argc; index++){
			fprintf(f[index], "%s\n", input);
			fclose(f[index]);
		}
	}

	return 0;
}

/** I was having trouble in wrting and reading files. I think there 
	is something different between my Mac and my teammates' PCs. 
	Sometimes it gives different testing results.
	The professional code has far more debugging functions than my function. 
*/