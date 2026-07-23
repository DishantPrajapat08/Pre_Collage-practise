// Structure
# include <iostream>
using namespace std;

struct player{
    int rollno;
    char favcar;
    float salary;
};


int main(){

struct player dishant;
dishant.rollno =1;
dishant.favcar ='m';
dishant.salary =1000;


cout<<dishant.salary<<endl;
cout<<dishant.rollno<<endl;
cout<<dishant.favcar<<endl;
    
    return 0;
}