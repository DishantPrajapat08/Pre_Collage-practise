//union
# include <iostream>
using namespace std;

int main(){
    union country;{
    int USA;
    char INDIA;
    float CHINA;
    };
    
    union country c1;
    c1.INDIA=10;

    return 0;
}