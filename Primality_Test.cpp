#include<iostream>
#include<cmath>
using namespace std;

// isPrime is a function to test Primality and returns a Boolean Value to the Main Function
///////////////////////////////////////////////////////////////////////////////////////

bool isPrime(int n){
    bool result = true;
// Checking the divisibility by 2, 3;
    if(n%2==0 || n%3==0){
        if (n == 2 || n == 3)
        {
            return true;
        }
        
        result = false;
        return result;
    }
// Checking the divisibility by 6k +-1 integers;
    int i = 1;
    while (pow(6*i+1,2) <= n)
    {
        if (n%(6*i - 1)==0 || n%(6*i + 1)==0 )
        {
            result = false;
            return result;
        }
        i+=1;
    }
    return result;    
}
///////////////////////////////////////////////////////////////////////////////////////

int main(){
    int number;
    bool result;
    cout<<"Enter a number to check whether it is a Prime Number or not : ";
    cin>>number;
    result  = isPrime(number);
    if (result){
        cout<<"\nThe number that you entered is a Prime Number."<<endl;
    }
    else{
        cout<<"The number that you entered is not a Prime Number."<<endl;
    }
    return 0;
}
