// mastest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <map>
#include <iostream>


using namespace std;

int main()
{
    string name;
    int pop;

    string states[] = { "Washington", "Alaska","Montana","Colarado","Indiano" };
    int pops[] = { 542,1578,6574,1265,2354 };

    map<string, int, less<string>> mapStates;
    map<string, int, less<string>> ::iterator iter;
    for (int j = 0;j < 5;j++)
    {
        name = states[j];
        pop = pops[j];
        mapStates[name] = pop;
    }
    pair<string, int> *pair1 = new pair<string, int>[5];

    for (int i = 0;i < 5;i++)
    {
        (pair1 + i)->first = states[i];
        (pair1 + i)->second = pops[i];
    }


    map<string, pair<string,int>, less<string>> mapStates2;
    

    for (int j = 0;j < 5;j++)
    {
        mapStates2[states[j]]=*(pair1 + j);
    }

    map<string, pair<string, int>, less<string>> ::iterator iter2;

    for (iter2 = mapStates2.begin();iter2 != mapStates2.end();iter2++)
    {
        cout << "State2:" << (*iter2).first << "   Pops2 p1 " << (*iter2).second.first<<" p2 "<<(*iter2).second.second <<endl;
    }
    return 0;
}

