#ifndef functii.h
#define functii.h
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;
ifstream f("bac.txt");

int primaCifra(int n)
{
    while(n/10)
        n=n/10;
    return n;
}



void solutie(){

    int x[100],d=0,n;
    while(f>>n)
    {
        x[d++]=n;
    }


    int smax=1,dmax=0,k=1;
    for(int i=0;i<d-1;i++)
    {
        if(x[i]%10==primaCifra(x[i+1]))
        {
            int j=i;
            while(j+2<d && x[j+1]%10==primaCifra(x[j+2]))
            {
                j++;
            }
            if(j-i+1>dmax-smax+1)
                smax=i,dmax=j;
            i=j;
        }
    }
    cout<<dmax-smax;

}

void solutie2()
{
        int a,b,maxim=INT_MIN,k=1,sb;
    f>>a;
    while(f>>b)
    {
        sb=b;
        cout<<a<<" "<<b<<endl;
        while(b/10)
            b=b/10;
        if(a%10==b)
            k++;
        else
        {
            if(maxim<k)
                maxim=k;
            k=1;
        }
        a=sb;

    }
        if(maxim<k)
            maxim=k;
    cout<<maxim;
}





#endif // functii.h
