#include <iostream>

using namespace std;

int numarare(int n,int m,int a[20],int b[20])
{
    int minim=INT_MAX,k=0;
    for(int i=0;i<m;i++)
        if(minim>b[i])
            minim=b[i];
    for(int i=0;i<n;i++)
        if(a[i]<minim)
            k++;
    return k;
}

int main()
{
    int a[7]={1,4,5,3,82,6,2},b[8]={56,6,34,23,8,9,12,18};
    cout<<numarare(7,8,a,b);
    return 0;
}
