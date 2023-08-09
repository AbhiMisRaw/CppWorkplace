#include <iostream>

using namespace std;
bool isPrime(int);
int main(){
    int num;
    cin>>num;
    bool isPrimeNumber = isPrime(num);
    cout<<num+" is a prime number " + isPrimeNumber ;
    cout<<isPrimeNumber;
    return 0;
}
bool isPrime(int num){
    if(num == 2 || num == 1) return true;
    int count = 2;
    while(count < num){
        if(num%count == 0){
            return true;
        }else count++;
    }
    return false;
}