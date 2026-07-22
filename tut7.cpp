//FOR LOOP WHILE LOOP AND DO WHILE LOOP

# include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    while (age<=17){
        cout<<"Not elligable for team";
        break;
    }
    while(age>=18){
        cout<<"eligible for team";
        break;
    }

    return 0;
}

