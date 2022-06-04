#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();

   int t;
   cin >> t;

   priority_queue<int, vector<int>, greater<int> >pq;

   while(t--){
      int n;
      cin >> n;
      
      int arr[n];
      for(int i=0; i<n; i++) cin >> arr[i];
      if(n==1){
         cout << "0" << endl;
         continue;
      }

      for(int i=0; i<n; i++) pq.push(arr[i]);
      
      int sum = 0;
      while( pq.size() != 1 ){
         int x1 = pq.top();
         pq.pop();

         int x2 = pq.top();
         pq.pop();

         sum += x1+x2;

         pq.push(x1+x2);

      }
      pq.pop();
      cout << sum << endl;
      
   }

}