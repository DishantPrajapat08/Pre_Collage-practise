// #Arrays
# include <iostream>
using namespace std;

int main(){

    int Team[4]={10,20,30,40};
    int i=1;
    cout<<"Point of team is"<<i<<endl;
    i++;
    cout<<Team[0]<<endl;

    cout<<"Point of team is"<<i<<endl;
    i++;
    cout<<Team[1]<<endl;

    cout<<"Point of team is"<<i<<endl;
    i++;
    cout<<Team[2]<<endl;

    Team[3]=50;
    cout<<"Point of team4 is"<<i<<endl;
    cout<<Team[3]<<endl;

    return 0;
}
