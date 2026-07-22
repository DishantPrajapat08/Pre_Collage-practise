# include <iostream>
using namespace std;

int main()
{
int AGE;


 cout<<"What is your Age?" << endl;
 cin>>AGE;

 if(AGE<18){
    cout<<"You are not eligible to vote"<<endl;
 }

else if(AGE>=18){
     cout<<"You are eligible to vote"<<endl;
}

    return 0;
}