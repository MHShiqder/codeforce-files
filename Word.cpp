#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    char word[100];
    cin>>word;
    int sije=strlen(word);
    for(int i=0;i<sije;i++)
    {
        if(int(word[i])>=97)
            sum++;
    }
    if((sije-sum)>(sije/2))
    {
        for(int i=0;i<sije;i++)
        {
            word[i]=toupper(word[i]);
        }
        cout<<word<<endl;
    }
    else
    {
        for(int i=0;i<sije;i++)
        {
            word[i]=tolower(word[i]);
        }
        cout<<word<<endl;
    }

    return 0;
}
