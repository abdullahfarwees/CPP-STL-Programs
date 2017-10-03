#include<bits/stdc++.h>

using namespace std;

int main()
{
map<int,string> mp;

mp.insert( make_pair(1,"fayas") );
mp.insert( make_pair(2,"farwees"));
mp.insert( make_pair(4,"fayas"));

mp[3] = "shamshad"; // replace value

for(map<int,string>::iterator it = mp.begin(); it != mp.end(); it++)
{

	cout << it->first << " " << it->second << endl;

}

cout << mp.at(3) << " --- \n";

return 0;
}
