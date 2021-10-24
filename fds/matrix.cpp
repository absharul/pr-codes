#include<iostream>
using namespace std;

int main(){
    int mat1[3][3], mat2[3][3], mat[3][3];
    cout<<"\nEnter the elements of Mat1: ";  //input for mat1
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            cin>>mat1[n][m];
        }
    }

    cout<<"\nEnter the elements of Mat2: ";   //input for mat2
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            cin>>mat2[n][m];
        }
    }
    
    cout<<"\nElements of Mat1: "<<endl;        //output for mat1
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            cout<<" "<<mat1[n][m];
            if(m==3 -1)
            cout<<endl<<endl;
        }
    }

    cout<<"\nElements of Mat2: "<<endl;    //output for mat2
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            cout<<" "<<mat2[n][m];
            if(m==3 -1)
            cout<<endl<<endl;
        }
    }
    
    
    for(int n=0; n<3; n++){  // sum of two matrix
        for(int m=0; m<3; m++){
            mat[n][m]=mat1[n][m]+mat2[n][m];
        }
    }
    
    cout<<"\nThe sum of two matrix are: "<<endl;   //output of sum
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            cout<<" "<<mat[n][m];
            if(m==3 -1)
            cout<<endl<<endl;
        }
    }

    return 0;

}