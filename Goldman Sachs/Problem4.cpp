// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string res="";
  int i=0,j;
  while(i<src.size())
  {
      res = res + src[i];
      j=i+1;
      while(j<src.size() && src[j]==src[i])
      {
          j++;
      }
      res=res+(char)(j-i+'0');
      i=j;
  }
  return res;
}     
 
