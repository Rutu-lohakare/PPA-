#include <stdio.h>
#include <string.h>

int i,j,l1,l2;
char temp;
char string1[30],string2[30];
int main() 
{

   printf("Enter the string\n");
   gets(string1);
   printf("Enter another string\n");
   gets(string2);

   l1=strlen(string1);
   l2=strlen(string2);

   if(l1!=l2) 
   {    
      printf("%s and %s are not anagrams! \n", string1, string2);
      return 0;
   }

   for (i=0;i<l1-1;i++) 
   {
      for (j=i+1;j<l1;j++) 
      {
         if (string1[i] > string1[j]) 
	 {
            temp=string1[i];
            string1[i]=string1[j];
            string1[j]=temp;
         }
         if (string2[i] > string2[j]) 
	 {
            temp=string2[i];
            string2[i]=string2[j];
            string2[j]=temp;
         }
      }
   }

   for(i = 0;i<l1;i++) 
   {
      if(string1[i]!=string2[i]) 
      {    
         printf("Strings are not anagrams! \n", string1, string2);
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}
