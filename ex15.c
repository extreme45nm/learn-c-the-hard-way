#include <stdio.h>


int
main (int argc, char *argv[])
{
	int ages[] = {5,10,15,20,35};
	char *names[] = {
		"Alan","Thrall",
		"Myke","Stryker","Dick"
	};
	
	int count = sizeof(ages)/sizeof(int);
	int i = 0;
	
	
	
	for( i = 0 ; i < count ; i++){
		printf("%s has %dd years alive.\n",names[i],ages[i]);
	}	
	printf("\n");
	
	
	int *cur_age = ages;
	char **cur_name = names;
	for( i = 0 ; i < count ; i++){
		printf("%s is now %d years old.\n",cur_name[i],cur_age[i]);	
	}
	printf("\n");
	
	for( i = 0 ; i < count ; i++){
		printf("%s has growned up for %d years.\n",*(cur_name+i),*(cur_age+i));
	}
	printf("\n");
	
	
	//complex way
//	for(cur_name=names,cur_age=ages ; cur_age-ages<count ; cur_age++,cur_name++){
	//	printf("%s : %d y.o\n",*cur_name,*cur_age);
//	}

// up-side-down
	for( i = count-1 ; i >= 0 ; i--){
		printf("%s ::: %d years old.\n",cur_name[i],cur_age[i]);
	}
	
	return 0;
}
