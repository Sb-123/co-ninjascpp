#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string, int> ourMap;
    pair<string,int>p("abc",1);
    ourMap.insert(p);

    ourMap["def"]=2; //M-II to insert on map.

    //find or acces
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("abc")<<endl; // M-II to acces on map.


    cout<<ourMap.at("def")<<endl;
    // cout<<ourMap.at("ghi")<<endl;
    cout<<"size : "<<ourMap.size()<<endl;
    cout<<ourMap["ghi"]<<endl;
    cout<<"size : "<<ourMap.size()<<endl;

    // check presence :-
    if(ourMap.count("ghi")> 0){
        cout<<"ghi is presient"<<endl;
    }

    // erase :-
    ourMap.erase("ghi");
    if(ourMap.count("ghi")>0){
        cout<<"ghi is preseint "<<endl;
    }
    cout<<"size : "<<ourMap.size()<<endl;

}