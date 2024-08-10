#include <iostream>
using namespace std;

int main()
{
    int subnum,credits[100],gradept[100],num;
    float tcredit,CGPA,numer=0;
    cout<<"enter number of subjects"<<endl;
    cin>>subnum;
    cout<<"enter no. of semesters";
    cin>>num;
  for(int j=1;j<=num;j++)
  { cout<<"for sem "<<j<<endl;
    for(int i=0;i<subnum;i++)
    {    
        cout<<"enter number of credits of subject"<<(i+1)<<endl;
        cin>>credits[i];
        cout<<"enter grades obtained in subject"<<(i+1)<<endl;
        cin>>gradept[i];
         tcredit=tcredit+credits[i];
         numer=numer+(credits[i]*gradept[i]);
    }
  
    cout<<"SGPA IS  "<<(numer/tcredit)<<endl;
   CGPA=(numer/tcredit)/num;

}

cout<<CGPA;

}
