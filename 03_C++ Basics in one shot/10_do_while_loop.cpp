/*
do-while loop will always execute once when the condition is not satisfied.
syntax:
initialization
do{
    body;
    increment/decrement;
    }while(condition);
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=7;
    do{
        cout<<"Stiver "<<i<<endl;
        i++;
    }while(i<=1);
}