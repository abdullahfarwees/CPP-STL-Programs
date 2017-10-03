#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
map<int,string> m; //{ {1,"fayas"}, {2,"farwees"}, {3,"salma"} };

m.insert( make_pair(4, "googlgogogogog"));
m.insert(pair<int,string>(5,"yayaya"));


m[24] = "zazaza"; // replace the value

cout<< m.at(24);


return 0;
}
