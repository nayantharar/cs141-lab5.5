//include library
#include <iostream>
using namespace std;
//give the main function
int main()
{
int i = 1,j;

   //print 5 rows
   while(i <= 5)
   {
   //print stars in the increasing order
   for (int j= 0;j < i;j++)
   {
   cout<<"*";}
    
   //go to the next line
   cout << endl;
   i++;
   }
return 0;
}
