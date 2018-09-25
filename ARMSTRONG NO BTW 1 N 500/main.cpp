#include <iostream>
#include <cmath>

using namespace std;

int main()
{    int c,a,i,n,b,sum=0;
    for(int i=1 ; i<=500 ; i++)
    {

        n=i;
        c=0;
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        n=i;
        b=0;
        while(n!=0)
        {
        a=n%10;
        n=n/10;
        b += pow(a , c);
        }
        if(b==i)
        {cout<<i<<endl;
        sum+=i;

        }
    }

    cout<<sum<<endl;


    return 0;
}
