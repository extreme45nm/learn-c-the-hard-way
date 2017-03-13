#include <stdio.h>

int
main (int argc, char *argv[])
{
	char full_name[]={
		'D','i','n','h',
		'C','o','n','g',
		'M','i','n','h',
	};
	int areas[] = {10,12,13,14,20};
	char *name = "Min";
	
	
	
	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of areas[]: %ld\n",sizeof(areas));
	printf("The numbers of int inside areas[]: %d\n",sizeof(areas)/sizeof(int));
	
	
	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of name[] = %ld\n",sizeof(name));
	printf("The size of full_name[] = %ld\n",sizeof(full_name));
	printf("The numbers of char in name[]= %d\n",sizeof(name)/sizeof(char));
	
	printf("The numbers of char in full_name[] = %d\n",sizeof(full_name)/sizeof(char));
	
	printf("name = %s\nfullname = %s\n",name,full_name);
	
	return 0;
}
