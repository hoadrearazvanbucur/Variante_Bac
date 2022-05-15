#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int n,m,fn[100]={0},fm[100]={0},x,nr=INT_MAX;
    f>>n>>m;
    for(int i=0;i<n;i++){
        f>>x;
        fn[x]++;
    }
    for(int i=0;i<m;i++){
        f>>x;
        fm[x]++;
    }
    for(int i=1;i<100;i++)
        if(fm[i])
            if(nr>fn[i])
                nr=fn[i];
    cout<<nr;
    return 0;
}
