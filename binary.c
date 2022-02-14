#include <stdio.h>
int main()
{
   int n;

   printf("Enter the number of bits in binary number :");
   scanf("%d",&n);

   char binary[n+1];
   char onescom[n+1];
   char twoscom[n+1];



   printf("\nEnter your binary number : ");
   scanf("%s", binary);
   printf("%s", binary);
   printf("\n ones complement of the binary number is :");



   for(int i=0;i<n;i++)
   {
       if(binary[i]=='0')
       onescom[i]='1';
       else if(binary[i]=='1')
       onescom[i]='0';
   }
   onescom[n]='\0';
   printf("%s\n",onescom);


printf("\nThe twos complement of a binary number is : ");
int carry=1;

for(int i=n-1; i>=0; i--)
    {
        if(onescom[i] == '1' && carry == 1)
        {
            twoscom[i] = '0';
        }
        else if(onescom[i] == '0' && carry == 1)
        {
            twoscom[i] = '1';
            carry = 0;
        }
        else
        {
            twoscom[i] = onescom[i];
        }
    }
twoscom[n]='\0';
printf("%s\n",twoscom);


return 0;
}
