#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{

unordered_map<int,string> omp;

omp.insert( make_pair(1,"fayas") );
omp.insert( make_pair(2,"farwees") );
omp.insert( make_pair(3,"shamshad"));

omp[4] = "fayas"; // also we can use for replacing.

unordered_map<int,string>::iterator it = omp.begin();

for( ; it != omp.end(); it++ )
{
	cout << it->first << " " << it->second <<endl;
}

return 0;
}
