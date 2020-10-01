#include <bits/stdc++.h> 
#include <vector>
using namespace std; 
  
void Leaders(int* arr,int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/int n=len;int c=0;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                c++;
            }
            else
                break;
            // cout<<c <<" "<<arr[i]<<" "<<arr[j]<<" ";
        }
        // cout<<'\n';
            int val=n-i;
        // cout<<val<<"\n";
            if(c==val)
            {
                // cout<<arr[i]<<"a";
                v.push_back(arr[i]);
            }
        c=0;
        
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
