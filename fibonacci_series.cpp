using namespace std;
int main()
 {
int t,n;
long long int next,first=0,second=1;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    first=0,second=1;
	    cout<<second<<" ";
	    for(int i=1;i<n;i++)
	    {
	        next=first+second;
	        first=second;
	        second=next;
	  cout<<next<<" ";

	    }
	    cout<<endl;
	}
	return 0;
}
