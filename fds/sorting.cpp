#include<iostream>
using namespace std;

//selection sort
void slsort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"Sorted sl arr : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//bubble sort
void bubsort(int arr[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0; i<n-1; i++)
        {
           if(arr[i]>arr[i+1])
           {
               int temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
           }
        }
        counter++;
    }
    cout<<"\nsorted bub arr: ";
   for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
}

void inssort(int arr[], int n)
{   

    for(int i=1; i<n; i++)
    {
         int current = arr[i];
         int j = i-1;
         while(arr[j]>current)
         {
             arr[j+1] = arr[j];
             j--;
         }
         arr[j+1] = current;
      
    }
    cout<<"\ninsertion sort: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   
   
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   slsort(arr,n);
   bubsort(arr,n);
   inssort(arr,n);

    
 return 0;

}
