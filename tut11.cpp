//union
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

    player dishant;
    union country c1;
    c1.rollno=7;
    
    cout<<c1.rollno;
    return 0;
}