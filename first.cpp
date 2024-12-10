// C++ program to illustrate the begin and end ite
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["apple"]=1;
    mp["banana"]=2;
    mp["cherry"]=3;
    map<string,int>::iterator it;
    it=mp.begin();
    while(it!=mp.end())
    {
        cout<<"key:"<<it->first    
        <<" ,value: "<<it->second<<endl;
        it++;
    }
    //Print the size of the map
    cout<<"size of map:"<<mp.size()<<endl;
    return 0;

}