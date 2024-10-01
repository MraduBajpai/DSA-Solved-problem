#include <iostream>

using namespace std;
 //Here we create a function
 int factorial(int n){

  //It is base case
    if (n<=1){
        return 1;}
    return n*factorial(n-1);    
    }

int main(){
    int number,result;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    result=factorial(number);
    cout<<number<<"!="<<result;
    return 0;
}
