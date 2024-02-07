#include <stdio.h>

int main()
{
	char name[] = "DJ"; // edit this line
    char user[20];    // create this line and replace N with however many elements you think is necessary
    printf("What is your name baby ?\n");
	scanf("%s", &user);
	printf("My name is %s, Your name is %s\n", name, user);

	return 0;
}
