#include <iostream>

using namespace std;

int nrDiv(int i)
{
    int k=0;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                k++;
    return k;
}

int numarare(int a,int b)
{
    int ct=0;
    for(int i=a;i<=b;i++)
        if(nrDiv(i)==3)
            ct++;
    return ct;
}

int main()
{
    cout<<numarare(6,36);
    return 0;
}
