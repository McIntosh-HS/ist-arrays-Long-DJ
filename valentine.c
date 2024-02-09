#include <stdio.h>

int main() {
    char res[20];
    
    printf("Wanna ave fun, yes or no?");
    scanf("%s", &res);

    if(res[0] == 'y' && res[1] == 'e' && res[2] == 's'){
        printf("Get ready!!!\n");
    }
    else if(res[0] =='n' && res[1] == 'o') {
        printf("Too bad\n");
    }
    else {
        printf(" I'll take that as a yes\n");
    }
    return 0;
}
