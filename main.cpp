#include<iostream>
using namespace std;

int main()
{
    int h, x, z;
    h = 11;
    x = 5;
    z = 1;
    for(int i=0;i<h;i++)
    {
        for(int kt=0;kt<x;kt++)
        {
            cout<<" ";
        }
        for(int j=0;j<z;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        if(i<5)
        {
            x--;
            z += 2;
        }
        else
        {
            x++;
            z -= 2;
        }
    }
}
