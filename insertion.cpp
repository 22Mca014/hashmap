#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mp;

    // Insert elements in random order
    mp.insert(pair<int, int>(1, 40));
    mp.insert(pair<int, int>(2, 50));
    mp.insert(pair<int, int>(3, 60));
    mp.insert(pair<int, int>(4, 70));
    mp.insert(pair<int, int>(5, 80));
    mp.insert(pair<int, int>(6, 90));

    // Another way of inserting a value in a map
    mp[7] = 10;

    // Iterating through the map
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }
    

    //we can use auto keyword to get the type of the variable
    //if i declear auto it  than no need to initialize map<int ,int>::iterator it;

    return 0;
}
