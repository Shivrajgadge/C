#include<stdio.h>
int main()
{
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i')
    printf("\n given character is vowel");
    else
    printf("\ngiven character is consonant");
    return 0;
}       

    
