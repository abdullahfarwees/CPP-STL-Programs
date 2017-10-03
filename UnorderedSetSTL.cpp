#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

int main()
{

unordered_set<string> ost;

ost.insert("fayas");
ost.insert("farwees");
ost.insert("fayas");

for(unordered_set<string>::iterator it = ost.begin(); it != ost.end(); it++)
{
	cout << " " << *it ;
}

return 0;
}
