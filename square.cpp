#include <iostream>
using namespace std;
int square (int a){
    
    return a*a;
}

int main()
{
    int a;
    cin>>a;
    
    int c=square(a);
    cout<<c<<endl;
    
    return 0;
}
