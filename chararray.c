#include <stdio.h>

int main()
{
	char name[] = "First name"; // edit this line
    char user[20];    // create this line and replace N with however many elements you think is necessary
    char userhe[25];    // create this line and replace N with however many elements you think is necessary
    printf("What is your name baby ?\n");
	scanf("%s", &user);
    scanf("%s", &userhe);
	printf("My name is DJ, Your name is %s %s\n", user, userhe);

	return 0;
}
