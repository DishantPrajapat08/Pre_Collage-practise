// Pointers
# include <iostream>
using namespace std;

int main(){

    int a=10;
    int*b=&a;

    cout<<"The value is"<<endl;
   cout<<a<<endl;
   
    cout<<"The value is"<<endl;
   cout<<*b<<endl;

    cout<<"The value is"<<endl;
   cout<<b<<endl;

    cout<<"The value is"<<endl;
   cout<<&b<<endl;

    cout<<"The value is"<<endl;
   cout<<&a<<endl;

  
    return 0;
}