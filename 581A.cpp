
#include <iostream>

#include<math.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    int diff= min(a,b);
    int red=a-diff;
    int blue=b-diff;
    int same=(red+blue)/2;
    cout<<diff<<" "<<same<<endl;
    

    return 0;
}