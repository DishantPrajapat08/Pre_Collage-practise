// sum of n even no
# include <iostream>
using namespace std;

int main(){
    
    int n=10;
    cout<<"Enter the valve of n:"<<" ";
    cin>>n;
    int sum=0;
    for(int i=2;i<=n;i++){
    if(i%2==0){
        sum+=i;
    }
}
cout<<sum;
    return 0;
}