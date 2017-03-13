#include <stdio.h>

int
main (int argc, char *argv[])
{
	
	int number[4] = {5};
	char name[4] = {'a'};
	
	int i = 0;
	for(i = 0 ; i < sizeof(number)/sizeof(int) ; i++){
		printf("number[%d] = %d",i,number[i]);
	}
	
	name[0]='M';
		name[1]='i';
			name[2]='n';
				name[3]='\0';
	
	printf("name = %s",name);
	
	for(i = 0 ; i < sizeof(number)/sizeof(int) ; i++){
		number[i] = name[i];
	}
	
	for(i = 0 ; i < sizeof(number)/sizeof(int) ; i++){
		printf("number[%d] = %c",i,number[i]);
	}
	
	
	return 0;
}
