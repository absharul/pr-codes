#include <iostream>
using namespace std;
 
void display(int array[], int size) 
{ 
  int i; 
  for (i=0; i < size; i++)
  { 
    cout<<array[i]<<"\t";
  }
  cout<<"\n"; 
} 

 
int main() 
{ 
  int array[] = {11,23,45,12,35,55,19,15,9,2,100}; 
  int size = sizeof(array)/sizeof(array[0]);

  cout<<"Before sorting: \n"; 
  display(array, size);

  int i, j, min_idx,temp;  
  
    
    for (i = 0; i < size-1; i++)  
    {  
        
        min_idx = i;  
        for (j = i+1; j < size; j++)
        {
        if (array[j] < array[min_idx])  
            min_idx = j;  
        }
                     
        temp = array[min_idx];
        array[min_idx] = array[i]; 
        array[i] = temp;}
        cout<<"After sorting: \n"; 
        display(array, size); 
    
    return 0; 
    
}