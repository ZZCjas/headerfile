#define import include
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h> 
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <conio.h>
#include <vector>
#define repeat(i,a,b) for(long long i=a;i<=b;i++)
#define start using namespace IME;using namespace OM;using namespace var;using namespace type;using namespace times;using namespace maths;using namespace str;int main()
namespace IME
{
	using std::cin;
	#define input(c) {ios::sync_with_stdio(false);std::cin>>c;}
	#define read std::cin
	char* File(char* filename)
	{
		char* text;
		FILE *pf = freopen(filename,"r",stdin);
		fseek(pf,0,SEEK_END);
		long lSize = ftell(pf);
		text=(char*)malloc(lSize+1);
		rewind(pf); 
		fread(text,sizeof(char),lSize,pf);
		text[lSize] = '\0';
		freopen("CON","r",stdin);
		return text;
	}
}
namespace OM
{
	using namespace std;
	#define say cout
	#define print(d) {ios::sync_with_stdio(false);std::cout<<d;}
	#define end '\n'
	void Say(string s)
	{
		std::cout<<s;
	} 
}
namespace var
{
	#define Gen auto
	#define memory(a) sizeof(a)
	#define int(a) (int)a
}
/*
	Name:ZZC 
	Description: This is a C++ header file that is very useful(A little bite like Python!such as #import,input(),print()). 
*/
using namespace std;
namespace times
{
	bool isLeap(long long a) 
	{
		if(a<3200)
		{
			if(((a%4==0)||(a%400==0))&&((a%100!=0)))
			{
				return 1; 
			}
			else
			{
				return 0;
			}
		}
		else if(a>=3200)
		{
			if(((a%4==0)||(a%400==0))&&(a%100!=0)&&(a%3200==0)&&(a%172800==0))
			{
				return 1; 
			}
			else
			{
				return 0;
			}
		}	
	}
	long long timer() 
	{
		long long b=time(0);
		system("pause");
		long long c=time(0);
		return c-b;
	}
}
namespace type
{
	char keyc(void)
	{
		return (char)getch();
	}
	int keyn(void)
	{
		return (int)getch();
	}
}
long long getPW()
{
	cout<<"输入一个密码"<<endl;
    unsigned long long a=0,b,T;
    bool s=0;
    scanf("%I64d",&b);
    cout<<"暴力破解开始！小心电脑崩溃！" <<endl; 
    system("pause");
    T=time(0);
	while(s==0) 
	{
        a=a+1;
    	if(a==b)
    	{
    		s=1;
    		cout<<" "<<a<<" "<<"True"<<" 第"<<a<<"项"<<endl;
		}
		else
		{
			s=0;
			cout<<" "<<a<<" "<<"False"<<" 第"<<a<<"项"<<endl;
		}
	}
    unsigned long long E=time(0);
    cout<<"用时"<<E-T<<"秒破解成功,共尝试"<<a<<"次"<<endl;
    system("pause");
    return (long long)E-T;
}
void print_map(int x1,int y1)
{
	for(int i=1;i<=x1;i++)
	{
		if(i==y1)
		{
			cout<<"o";
		}
		else
		{
			cout<<"#";
		}
	}
	cout<<endl;	
}
string block()
{
	return "█";
}
namespace maths
{
long double math(long double a,char b,long double c)
{
	if(b=='+')
	{
		return a+c;
	}
	else if(b=='-')
	{
		return a-c;
	}
	else if(b=='*')
	{
		return a*c;
	}
	else if(b=='/')
	{
		return a/c;
	}
	else if(b=='%')
	{
		return (long long)a%(long long)c;
	}
	else
	{
		
	}
}
int minnum (int a1,int b1,int c1,int d1)
{
	int num1=a1;
	num1=min(num1,b1);
	num1=min(num1,c1);
	num1=min(num1,d1);
	return num1;
}
long long digit_Num(long long n)
{
    long long e=n,sum=0;
    while (e>0)
    {
        e/=10;
        sum++;
    }
    return sum;
}
int q_sum(int x,int y,int z)
{
    return (x + y) * z / 2;
}
int M_dis(int x1,int y1,int x2,int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}
long double pi()
{
	return 3.1415926535897932384;
}
long int Num_round(double x)
{
	if(x-(long int)x<0.5)
	{
		return x;
	}
	else
	{
		return (long int)x+1;
	}
}
int maxnum(int a,int b,int c,int d)
{
	int num=a;
	num=max(b,num);
	num=max(c,num);
	num=max(d,num);
	return num;
}
int random(int x)
{
	srand(time(0));
	int n;
	n=rand()%(x+1);
	return n; 
}
bool isPrime(int n) 
{
    if(n < 2) 
	{
        return false;
    }
    int squareRoot=1;
    while(squareRoot*squareRoot<n)
	{
        squareRoot++;
    }
    for (register int i = 2; i <= squareRoot;i++) 
	{
        if (n % i == 0) 
	    {
             return false;
        }
    }
    return true;
}
}
namespace str
{
	string link(string a,string b)
	{
		return a+b;
	}
	bool included(string s,string tar)
	{
	if(s.find(tar)<s.size())
	{
		return 1;
	}
	else
	{
		return 0;
	}
	} 
int searchat(string s,string a)
{
	if(s.find(a)<=s.size())
	{
		return s.find(a)+1;
	}
	else
	{
		return -1;
	}
}
int howbigs(string s)
{
	return s.size();
}
int ASCIIof(char c)
{
	return (int) c;
}
int lower(char c)
{  
    if ((c >= 'A') && (c <= 'Z'))  
        return c + ('a' - 'A');  
    return c;  
}  
int higher(char c)
{
	if ((c >= 'A') && (c <= 'Z'))  
        return c + ('a' + 'A');  
    return c;  
}
int split(string s,int a)
{
	return s[a-1]-48;
}
}
namespace systems
{
	void color(int x)
	{
	if(x>=0 && x<=15)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	}
/*0=黑色                  8=灰色　　

  1=蓝色                  9=淡蓝色               　　                        

　2=绿色                  10=淡绿色          　　

　3=湖蓝色             	  11=淡浅绿色     

　4=红色                  12=淡红色       　

　5=紫色                  13=淡紫色           　　

　6=黄色                  14=淡黄色             　　

　7=白色                  15=亮白色 */ 
	char bell()
	{
		return '\a';	
	} 
	void sleep(int i)
	{
		Sleep(i*1000);
	}
	void clear()
	{
		system("cls");
	}
	void wait()
	{
		system("pause");
	}	
	#define _delete(p) {if(NULL!=p){delete p;p=NULL;}}
}
namespace logic
{
	bool bools(bool a)
	{
		return a;
	}
	#define yes true
	#define no false
} 
namespace  online_mode
{
	void mode(const char *s)
	{
		if(s=="online")
		{
			#define	ONLINE_JUDGE
		}
		else if(s=="offline")
		{
			#define IDE	
		}
		else
		{
			return;
		}
	}
	string whichmode()
	{
		#ifdef ONLINE_JUDGE
			return "ONLINE_JUDGE";
		#else
			#ifdef IDE
				return "IDE";
			#else 
				return "unknown mode";
			#endif	
		#endif					
	}
	string clearm(const char *r)
	{
		if(r=="ONLINE_JUDGE")
		{
			#undef ONLINE_JUDGE
			return "cleared ONLINE_JUDGE";
		}
		else if(r=="IDE")
		{
			#undef IDE
			return "claered IDE";
		}
	}
}
