#include<iostream>
using namespace std;
int main()
{
    int ans=1453;
    int guess;
    int a=5;
    while (guess!=ans&&a!=0) {
        a--;
        cout<<"�q�@�ӥ����?"<<endl;
        cin>>guess;
        if (guess>ans)
            cout<<"�q�j�F�A��"<<a<<"�����|"<<endl;
        else
            if (guess<ans)
            cout<<"�q�p�F�A��"<<a<<"�����|"<<endl;
                else{cout<<"�q��F�A��"<<a<<"�����|"<<endl;}
    }
    return 0;
}
