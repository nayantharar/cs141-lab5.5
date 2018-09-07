//include library
#include <iostream>
using namespace std;
//give the main function
int main()
{
int i = 1,j,k;

   //print 5 rows
   while(i <= 5)
   {

   //print spaces in the decreasing order
   for (int j = 0;j < (5-i) ;j++)
   {
   cout<<" ";
   }
   //print the required number of stars
   for(k =((2*i)-1);k > 0;k--)
   {
   cout<<"*"; 
   }
    
   //go to the next line
   cout << endl;
   i++;
   }
return 0;
}
