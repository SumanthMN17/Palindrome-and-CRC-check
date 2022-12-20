#include<stdio.h>
#include<ctype.h>
#include<string.h>

unsigned int xor2_div(char *i, char *o)
{
unsigned int j,k;
char g[100]={"101001"};
strcpy(o,i);
for(j=0;j<strlen(i);j++)
if(*(o+j)=='1')
for(k=0;k<strlen(g);k++)
{
if(((*(o+j+k)=='0')&&(g[k]=='0'))||((*(o+j+k)=='1')&&(g[k]=='1')))
*(o+j+k)='0';
else
*(o+j+k)='1';
}
for(j=0;j<strlen(o);j++)
if(o[j]=='1')
return (1);
return(0); 
}

void main()
{
char i[20]={0}, o[20]={0}, x;
printf("Enter the 16 bit data to be checked:");
scanf("%s", i);
if(strlen(i)==16)
{
for(x=0;x<5;x++)
{
    o[x]=i[x+11];
}
if(!xor2_div(i,o))
printf("\n Received Code is Error Free");
else
printf("\n Received Code is Erroneous");
}
else
printf("Enter a proper 16 bit data");
}