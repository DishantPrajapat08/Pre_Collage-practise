//loop in a loop
# include <iostream>
using namespace std;

int main(){
    
    for(int i=1;i<=10;i++)
    {
        int m=10;
        for (int p = 1; p <= m; p++)
        {
         cout<<'@';
        }
        cout<<endl;


    }

    return 0;
}