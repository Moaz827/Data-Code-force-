#include <iostream>
#include <math.h>
using namespace std;
 int main() {

long long m  ,n ,a ,r1,r2,ruselt  ;    //m = Width  وn=haire, a =Length flagston
    cin>>m>>n>>a;
     r1 =ceil(m/(a*1.0));     // we use the ceil to take the nearest correct number
     r2 =ceil(n/(a*1.0));
     ruselt=r1*r2;

        cout<<ruselt<<endl;



     return 0;
 }