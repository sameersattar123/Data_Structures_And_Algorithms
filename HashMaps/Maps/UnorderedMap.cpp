#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main(){
    // Creation
    unordered_map<string,int> m;

    // Insertion
    // Type 1
    pair<string,int> p = make_pair("sameer" , 1);
    m.insert(p);

    // Type 2
    m["wasey"] =  2;
    m["wasey"] =  3;  // key change to 2 to 3

    // Type 3
    pair<string,int> pair2("ali" , 2);
    m.insert(pair2);

    // Searching 
    cout<<m["wasey"]<<endl;  // 3
    cout<<m.at("ali")<<endl; // 2
    cout<<m["sameer"]<<endl; // 1

    // Size
    cout<<"size of m "<<m.size()<<endl;

    // To Check Presence
    cout<<m.count("saami")<<endl;  // false (0)
    cout<<m.count("sameer")<<endl; // true(1)

    // Remove / erase
    m.erase("ali");
    cout<<"size of m "<<m.size()<<endl;





     

}