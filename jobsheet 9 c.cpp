#include <stdio.h>
int main()
{
int i;
char nama[6]={'A','K','B','A','R','\0'};

char nama2[6]="AKBAR";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
