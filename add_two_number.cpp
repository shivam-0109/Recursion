#include <iostream>
using namespace std;
int add (int a,int b){
    int c=a+b;
    return c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int s=add(a,b);
    cout<<s<<endl;
    
    return 0;
}
