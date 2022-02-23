#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if(ch <= 122 && ch >= 97){
        printf("It is Lowercase");
    }
    else
    {
        printf("It is Not the lowercase");
    }
    
    return 0;

    // ASCII Values --> 97-122 = a-z
}