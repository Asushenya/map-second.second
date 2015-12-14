// mastest.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Man {
private :
    string sity;
    int a;
public:
    Man() {};
    Man(int _a,string Name_) :a(_a)
    {
        sity = Name_;
    };
    void show()
    {
       
        cout << "Sity is : " << sity;
        cout << ", age is: " << a<<endl;
    }


};

int main()
{
    map<int, pair<string,Man>> Map;

    Man obj1(12, "Boston");
    Man obj2(25, "New-York");
    Man obj3(40, "NewJercie");
    vector<Man> arr;
    arr.push_back(obj1);
    arr.push_back(obj2);
    arr.push_back(obj3);

    string names[] = { "Bill","John","Ken" };

    pair<string, Man> *_pair = new pair<string,Man> [3];
    for (size_t i = 0; i < 3; i++)
    {
        (_pair + i)->first = names[i];
        (_pair + i)->second = arr[i];
    }

    for (size_t i = 0; i < 3; i++)
    {
        Map[i] = *(_pair + i);
    }

    for (size_t i = 0; i < 3; i++)
    {
        cout << "for man #" << i << endl;
        cout << "Name: " << Map[i].first << " "; Map[i].second.show();
    }
 
    return 0;
}

