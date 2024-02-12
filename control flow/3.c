#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    c=tolower(c);

    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
            printf("The character is vowel");
            break;
    
    default:
        printf("The character is not vowel");
        break;
    }
}