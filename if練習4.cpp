#include<iostream>
using namespace std;
int main()
{int m;
cout<<"�~���h��?";
cin>>m;
if (m<=25000)
cout<<"�[�~�᪺�~����"<<m*1.1;
else
    if (m>25000&&m<=27000)
    cout<<"�[�~�᪺�~����"<<m*1.07;
else
    if (m>27000&&m<=30000)
    cout<<"�[�~�᪺�~����"<<m*1.05;
else {cout<<"�[�~�᪺�~����"<<m*1.03;}
}
