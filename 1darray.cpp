#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    array[0];
    cout<<array[0]<<endl;     //we have runed the index value
    array[4]=5;
    cout<<array[4]<<endl;   //we have changed the index value
    array[5]=6;
    cout<<array[5]<<endl;  //we have added 1 more item
   for(int i=0;i<7;i++)
   {
       cout<<array[i]<< "\t";  //we will print full array
   }
   cout<<endl;
   int size = sizeof(array);   //we print the size of array
   cout<<size<<endl;
   cout<<sizeof(array[0])<<endl; //we print the size of arrays index
   cout<<&array[0]<<endl;      //we print the index location
   cout<<&array[1]<<endl;
   cout<<&array[4];

}
