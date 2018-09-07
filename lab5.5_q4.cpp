//include library
#include <iostream>
using namespace std;
//give the main function
int main()
{
int n = 5;

   //print n rows in the following
   for (int i = 0;i < 5;i++)
   {
     //print some spaces
     for (int j= 0;j < n-(i+1);j++)
     {
     cout<<" ";}
     //print some stars
     for (int k = 0; k < n;k++)
     {
     cout <<"*";}
  //go to the next line
  cout << endl;
  }
return 0;
}
