#include <bits/stdc++.h>
using namespace std;
namespace dbt
{
    int val = 50;
    int getval()
    {
        return (val * 10);
    }
}

struct node
{
    string str;
    int num;
    double doub;
    char x;
    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{
    double val = 10.45;
    cout << val << endl; //prints 10.0
    cout << dbt::getval() << endl;

    /*
    create a data type where you store
    {string,int,double,char};
    */

    //Wrong way of defining
    // node dbt;
    // dbt.s tr = "Darshan";
    // dbt.num = 79;
    // dbt.doub = 10.44;
    node *dbt = new node("Darshan", 79, 90.44, 'D');
    node dbt1 = node("Darshan", 79, 90.44, 'D');

    return 0;
}
