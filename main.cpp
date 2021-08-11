#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        char c;
        cin >> c;
        if (c=='D')
        {
            count++;
        }
        else{
            count--;
        }
    }
    if (count==0)
    {
        cout<<"Friendship"<<endl;
    }
    else if (count>0)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Anton"<<endl;
    }   
}