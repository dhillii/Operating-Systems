
#include "list.h"

int main()
{
	
	char* empty = "";
	char* pet1 = "Dog";
	char* pet2 = "Cat";
	char* pet3 = "Bird";
	char* pet4 = "Fish";

	char* name1 = "David";
	char* name2 = "Joseph";
	char* name3 = "Matthew";
	char* name4 = "Mark";
	char* name5 = "Luke";
	char* name6 = "John";
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

	flush_list(newList);

	print_list(newList);

	reset_head_val(newList, name1);

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

	free_list(newList);

	print_list(newList);





	return 0;
}