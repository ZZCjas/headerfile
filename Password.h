#include<string>
#include<cstdlib>
#include<conio.h>
#include<iostream>
#include<ctime>
using namespace std;
string KS(string s,int n)
{
    for(int i=0;i<s.size();++i)
    {
        for(int j=1;j<=n;++j)
        {
            s[i]++;
            if(s[i]>'z')
            {
                s[i]='a';            
            }
        }
    }
    return s;
}
string Sinput(void)
{
	//warning!it returns "string" type!
	string a="";
	while(true)
	{
		a=a+(char)getch();
		if(((int)a[a.size()-1])==13)
		{
			break;
		}
	}
	return a;
}
int EM(char a,bool s)
{
	if(s==1)
	{
		a+=10;
		a-=21;
		a*=2;
		a+=1;
		a/=2;
		return (int)a;
	}
	else
	{
		a*=2;
		a-=1;
		a/=2;
		a+=21;
		a-=10;
		return (int)a;
	}
}
int dic(int t,int s)
{
	srand(time(0));
	int a[t];
	for(int i=0;i<=t;i++)
	{
		a[i]=rand();
	}
	return a[s];
}
