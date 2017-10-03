#include<bits/stdc++.h>

using namespace std;

vector<int> foo(vector<int> *v)
{
	for(int i=0;i<10;i++)v->push_back(i);
	return *v;
}

bool findfoo(vector<int> *v)
{

bool status = find( v->begin() , v->end() , 2) != v->end();

return status;
}

int main()
{
vector<int> v;

foo(&v);
cout << " ** " << findfoo(&v) << endl ;

for(vector<int>::iterator it = v.begin(); it != v.end(); it++ )cout << *it << " " ;

cout << endl;

return 0;
}
