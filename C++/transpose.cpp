#include<iostream>
using namespace std;


int main(){
    int matrix[10][10], swap[10][10], n, m, i,j;
    cout<<"\nEnter the row size: ";
    cin>>n;
    cout<<"\nEnter the column size: ";
    cin>>m;
    cout<<"\n";
    cout<<"Enter the  elements: "<<endl;
    for( i=0; i<n; i++){
        for( j=0; j<m; j++){
            cout<<"element a"<<i+1<<j+1<<": "<<endl;
            cin>>matrix[i][j];
        }
    }

    cout<<"The elements are: "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
          cout<<" "<<matrix[i][j];
          if(j==m -1)
          cout<<endl<<endl;
        }
    }

   
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            swap[j][i] = matrix[i][j];
           
        }
    }
    cout<<"The transpose of the matrix are"<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
           cout<<" "<<swap[i][j];
           if(j==n -1)
           cout<<endl<<endl;
        }
    }
    return 0;
}