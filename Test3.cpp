#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "Input:\nN = "; cin >> n;	//input
    
    int a[n];    
    i=0;
    while(i<n)							//input array
    {      cin>>a[i]; i++;			}
    
    cout<<"Array = {";
    i=0;
    while(i<n)							//output array
    {
		cout<<a[i];						
		if(i==n-1)
			cout << "}" << endl;
		else 
			cout << ", ";
		i++;
    }
    cout << "Output: ";
   
	for(i=0;i<n;i++)
		for(int j=i+1;j<n;)
		{
			if(a[i]==a[j])				//check if there is duplicate element	
			{							
				for(int k=j;k<n-1;k++)	
					a[k]=a[k+1];		//if Y -> element in the back will be moved to front	
				n--;					//then reduce the array
			}
			else
				j++;					//if N -> check next element
		}
    i=0;
    while(i<n)
    {
		cout<<a[i]<< " ";				//output array after finished
		i++;
    }
}
