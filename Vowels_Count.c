#include<stdio.h>

#include<string.h>

int main()

{

char s[50],c=0,count=0; 
scanf("%[^
]s",s);
while(s[c]!=NULL)
{
    if
    (s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='o'||s[c]=='0'||s[c]=='u'||s[c]=='U')

count++;
c++;

}

printf("%d",count);

return 0;

}