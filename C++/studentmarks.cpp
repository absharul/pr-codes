#include<iostream>
using namespace std;

struct student{
   int rollno;
   char name[10];
   int marks;
};

int main(){
   struct student s[10];
   int n,i,j,ch,max,min,p,q;
   float sum=0,avg;
   char ch1;
   cout<<"\nEnter the number of of students in class: ";
   cin>>n;
   for(i=0;i<n;i++){
      cout<<"\nEnter rollno, name and marks of students : ";
      cin>>s[i].rollno>>s[i].name>>s[i].marks;
   }
   cout<<"\nRollno.\tName\tMarks\n";
   for(i=0; i<n; i++){
      cout<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\n";
   }
   do{
      cout<<"\n1.Average score of class \n2.Highest & lowest score of class\n3.Marks scored by most of the student\n4.List of absent student";
      cout<<"\n Enter your choice: ";
      cin>>ch;
      switch(ch){
          case 1: for(i=0; i<n;i++){
                sum=sum+s[i].marks;
          }
          avg=sum/n;
          cout<<"\nAverage score of class = "<<avg;
          break;
        case 2:max=0;
               for(i=0; i<n; i++){
                  if(s[i].marks>max){
                     max=s[i].marks;
                  }
                  cout<<"\nHighest score= "<<max;
                  min=9999;
                  for(i=0;i<n;i++){
                     if(s[i].marks<min){
                        min=s[i].marks;
                     }
                  }
               }  
               cout<<"\nlowest score= "<<min;
               break;
         case 3: p=0;q=0;
                 for(i=0;i<n;i++){
                    p=0;
                    for(j=i+1;j<n;j++){
                       if(s[j].marks!=0 && s[i].marks!=0){
                          if(s[j].marks==s[i].marks){
                             p++;
                          }
                       }
                    }
                    if(p>q){
                       q=p;
                       cout<<"\n Marks scored by most of the students "<<s[i].marks<<" by "<<q+1<<" students\n";
                    }
                 } 
             break;
         case 4: 
               for(i=0; i<n; i++){
                  if(s[i].marks==0){
                     cout<<"\n"<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].marks<<"\n";

                  }
               }  
               break;           
      }
      cout<<"\n do you want contn";
      cin>>ch1;

   }while(ch1=='y');
   return 0;

}