//union and structure combine
# include <iostream>
using namespace std;

struct player
{
    int srno;
    char favcar;
};

union country
{
int rollno;
char car;
};

int main(){
   struct player dishant;
   dishant.srno=7;
   dishant.favcar='m';

    
    union country c1;
    c1.rollno=10;
    
    cout<<c1.rollno<<endl;
    cout<<dishant.srno<<endl;

    return 0;
}