#include<iostream>
using namespace std;

int parameterisedRecursion(int i,int sum){
    if (i<1)
    {
        /* code */
        cout << sum<<endl;
        return 0;
    }
    parameterisedRecursion(i-1,sum+i);
    return 0;
    
}

int functionalRecursion(int i){
    if(i == 0){
        return 0;
    }
    return i + functionalRecursion(i-1);
}
int factorialInParameterised(int i , int fact){
    if(i<1){
        cout << fact<< endl;
        return 0;
    }
    factorialInParameterised(i-1, fact*i);
    return 1;
}

int main(){
    int i;
    cin >> i;
    // parameterised recursion
    parameterisedRecursion(i,0);
    int funcOutput = functionalRecursion(i);
    cout << funcOutput << endl;
    factorialInParameterised(i,1);
    return 0;
}
