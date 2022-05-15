#include <iostream>
#include <fstream>

using namespace std;
ifstream f("fisier.txt");

int main()
{
    int a,b,maxim=INT_MIN,k=1,sb;
    f>>a;
    while(f>>b){
        sb=b;
        while(b/10)
            b=b/10;
        if(a%10==b)
            k++;
        else{
            if(maxim<k)
                maxim=k;
            k=1;
        }
        a=sb;
    }
        if(maxim<k)
            maxim=k;
    cout<<maxim;
    return 0;
}
