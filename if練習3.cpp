#include<iostream>
using namespace std;
int main()
{int x;
int y;
cout<<"x�Ȭ�?";
cin>>x;
cout<<"y�Ȭ�?";
cin>>y;
if (x>0&&y>0)
    cout<<"�b�Ĥ@�H��";
else
    if(x<0&&y>0)
        cout<<"�b�ĤG�H��";
    else
        if(x<0&&y<0)
            cout<<"�b�ĤT�H��";
        else
            if(x>0&&y<0)
                cout<<"�b�ĥ|�H��";
            else
                if(x==0&&y==0)
                    cout<<"�b���I";
                else
                    if(x==0&&y!=0)
                        cout<<"�bx�b�W";
else
{cout<<"�by�b�W";}}
