/*
Function are set of codes which performs something for u
functions are used to modularise code
functions are used to increase readability
functions are used to use same code multiple times

4types of functions
1.void ->which does not return anything 
2.return
3.parameterised
4.non-parameterised
*/
#include<bits/stdc++.h>
using namespace std;

/*
void printName(string name)
{
    cout<<"Hey "<<name<<endl;
}
int main()
{
    string name;
    cin>>name;
    printName(name);
    
    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}
*/


// Take 2 numbers and prints its sum

void sum(int a,int b)
{
    int sum = a+b;
    cout<<"The sum: "<<sum<<endl;
}
int main()
{

    int x,y;
    cout<<"\nEnter two numbers :";
    cin>>x>>y;

    sum(x,y);
}

void sum(int a,int b)
{
    int sum = a+b;
    cout<<"The sum: "<<sum<<endl;
}
int main()
{

    int x,y;
    cout<<"\nEnter two numbers :";
    cin>>x>>y;

    sum(x,y);
}