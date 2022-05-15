#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[101];
    int f[60]={0},maxim=INT_MIN;
    cin.getline(a,101);
    for(int i=0;i<strlen(a);i++)
        if(a[i]!=' ')
            if(a[i]>='a' && a[i]<='z') f[a[i]-'a']++;
            else f[a[i]-'A']++;
        for(int i=0;i<60;i++)
            if(maxim<f[i]) maxim=f[i];
        for(int i=0;i<60;i++)
            if(f[i]==maxim)
                if(f[i]&&f[i]<30)
                    cout<<(char)(i+'a')<<" "<<f[i]<<endl;
                else
                    if(f[i]>29)
                        cout<<(char)(i+'A')<<" "<<f[i]<<endl;
    return 0;
}
