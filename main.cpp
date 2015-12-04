#include <iostream>

using namespace std;
int test(){
    cout << "test" << endl;
    return 100;
}
int main()
{
    //for(int i=0;i<20;i++)cout << i*i << endl;
    cout << test() << endl;
    return 0;
}
