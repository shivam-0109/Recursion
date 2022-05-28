#include <iostream>
using namespace std;
int power (int base , int p){
    if (p==0)
    return 1;
    else

    return (base*power(base,p-1));
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    int c=power(a,b);
    cout<<c<<endl;
    
    return 0;
}
