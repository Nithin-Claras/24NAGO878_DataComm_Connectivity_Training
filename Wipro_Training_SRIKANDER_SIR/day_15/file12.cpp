#include <iostream>
#include <map>
#include <string>
#include <unordered_map>


using namespace std;

int main() {
    
    // multimap<string, int> marks;
    unordered_multimap<string, int> marks;
    
    marks.insert(pair<string,int>("Sir", 45));
    marks.insert(pair<string,int>("Ans", 45));
    marks.insert(pair<string,int>("Soil", 45));
    marks.insert(pair<string,int>("Jos", 45));
    
    for(auto ele : marks)
    	cout << ele.first << " " << ele.second << endl;

    return 0;
}


