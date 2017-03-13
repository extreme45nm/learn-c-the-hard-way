#include <stdio.h>

int
main (int argc, char *argv[])
{
	
	if(argc < 2 ){
		printf("stupid!! You need more args\n");
		return 1;		
	}
	int i = 0;
	char **cur_argv = argv;
	for(i = 0 ; i < argc ; i++){
		printf("argv[%d] : %s\n",i,*(cur_argv+i));	
	}
	
	return 0;
}
