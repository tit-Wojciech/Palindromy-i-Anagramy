#include <iostream>

using namespace std;
string a, a1, a2;
int w;
bool sp (string s)
{
    int dl=s.size();
    for ( int i=0;i<dl/2;i++)
    if(s[i]!=s[dl-i-1]) return false;
    return true;
}

bool sa (string s1, string s2)
{
    int dl=s1.size();
    if(dl!=s2.size()) return false;
    else
    {
        int T1[2]={0,0}, T2[2]={0,0};
        for (int i=0;i<dl;i++)
        {
            if (s1[i]=='X') T1[0]++;
            else T1[1]++;
            if (s2[i]=='X') T2[0]++;
            else T2[1]++;
        }
        for (int i=0;i<2;i++)
            if (T1[i]!=T2[i]) return false;
    }
    return true;
}

int main()
{
    cout<<"Co chcesz zrobic:"<<endl<<"1-Sprawdzic czy to Palindrom"<<endl<<"2-Sprawdzic czy to Anagram"<<endl;
    cin>>w;
    switch (w)
    {
        case 1:cout<<"Wprowadz slowo"<<endl;
        cin>>a;
            if (sp(a)==true) cout<<"wyraz jest Palindromem";
                else cout<<"wyraz nie jest Palindromem";
                break;
        case 2:cout<<"Podaj wyrazy"<<endl;
        cin>>a1;
        cin>>a2;
        if(sa(a1,a2)==true) cout<<" wyrazy sa Anagramem";
            else cout<<"wyrazy nie sa Anagramem";
            break;
        default:cout << "Zla wartosc";
    }
    return 0;
}
