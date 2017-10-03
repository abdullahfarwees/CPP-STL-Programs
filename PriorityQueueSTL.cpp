#include<bits/stdc++.h>

using namespace std;

int main()
{

int arr[] = {2,5,1,3,6,0,76,78,54,45,42};
int size = sizeof(arr)/sizeof(arr[0]);

// priority_queue<int> pq;
priority_queue<int , vector<int> ,std::greater<int> > pq;

for(int i=0;i<size;i++)
{
	pq.push(arr[i]);
}

cout << pq.top() << " <-> " << pq.size() << endl; 

return 0;
}
