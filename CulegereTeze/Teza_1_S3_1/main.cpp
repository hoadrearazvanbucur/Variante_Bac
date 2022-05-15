#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[101],cpya[101],*cuv,save[101]={'#','\0'};
    int maxim=-1;
    cin>>a;
    strcpy(cpya,a);
    cuv=strtok(a,"#");
    while(cuv!=NULL){
        if(maxim<(int)strlen(cuv))
            maxim=(int)strlen(cuv);
        cuv=strtok(NULL,"#");
    }
    strcpy(a,cpya);
    cuv=strtok(a,"#");
    while(cuv!=NULL){
        if(strlen(cuv)==maxim)
        {
            char c[101];
            int k=0;
            for(int i=maxim-1;i>=0;i--)
                c[k++]=cuv[i];
                c[k++]='#';
                c[k]='\0';
            strcat(save,c);
        }
        else
        {
            int d=strlen(cuv);
            char sc[101];
            strcpy(sc,cuv);
            sc[d]='#';
            sc[++d]='\0';
            strcat(save,sc);
        }
        cuv=strtok(NULL,"#");
    }
    cout<<save;
    return 0;
}
