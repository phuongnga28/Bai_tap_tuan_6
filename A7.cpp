#include <iostream>
using namespace std;

	string st;
	char a[100];
	int b[100];
    int n;
void recursive(int x)
{
	for(int i=0; i<=n-1; i++)
		{
			if(b[i]==0)
			{
			b[i]=1;
			a[x] = st[i];
			//cout<<x<<"**"<<endl;
			if (x==n) 
			{
				for(int t=1; t<=n; t++)
					cout<<a[t];
				cout<<endl;
			}	
			else recursive(x+1);
			b[i]=0;
		}
		}
}
int main()
{
    cin >> st;
    n=st.length();
  // cin>>n;
    recursive(1);
    return 0;
}
