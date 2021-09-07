#include <iostream>
#include <map>
#include <string>
using namespace std;
  
int main()
{
    // map declaration
    map<string, int> mymap;
  
    // mapping strings to integers
    mymap["hi"] = 1;
    mymap["welcome"] = 2;
    mymap["thanks"] = 3;
    mymap["bye"] = 4;
  
    // printing the integer mapped
    // by string "thanks"
    cout << mymap.at("thanks") << endl;

    // second example
    map<string,int> theMap;
    theMap.insert( make_pair( "Key 1", -1 ) ); 
    theMap.insert( make_pair( "Another key!", 32 ) ); 
    theMap.insert( make_pair( "Key the Three", 66667 ) ); 

    map<string,int>::iterator iter;
    for( iter = theMap.begin(); iter != theMap.end(); ++iter ) {
        cout << "Key: '" << iter->first << "', Value: " << iter->second << endl; 
    }
    return 0;
}