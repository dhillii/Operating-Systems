
#include "list.h"

int main()
{
	
	char* empty = "";
	char* pet1 = "Dog";
	char* pet2 = "Cat";
	char* pet3 = "Bird";
	char* pet4 = "Fish";

	
	char* name2 = "David";
	char* name3 = "Matthew";
	char* name4 = "Mark";
	char* name5 = "Mary";
	char* name6 = "Jane";
	char* name7 = "Esther";

	list * newList = create_list(empty);

	int result = add_to_list(newList, pet1);
	result = add_to_list(newList, pet2);
	result = add_to_list(newList, pet3);
	result = add_to_list(newList, pet4);

	print_list(newList);

	char* pop = remove_from_list(newList);

	printf(" \nRemoved Element: %s\n", pop);

	print_list(newList);

	printf(".....................FLUSHING LIST...........................\n");
	flush_list(newList);
	printf(".............................................................\n");

	print_list(newList);

	int temp = add_to_list(newList, name2);
	temp = add_to_list(newList, name3);
	temp = add_to_list(newList, name4);
	temp = add_to_list(newList, name5);
	temp = add_to_list(newList, name6);
	temp = add_to_list(newList, name7);

	print_list(newList);

	pop = remove_from_list(newList);
	printf(" \nRemoved Element: %s\n", pop);


	result = temp + result; //This is to eliminate warnings
	

	print_list(newList);


	printf(".....................FREEING LIST...........................\n");
	free_list(newList);
	printf(".............................................................\n");

	return 0;
}