#include <iostream>
using namespace std;
int main()
{
    int i,x,n;
    cout << "Input:\nN = "; cin >> n;	//input
    int a[n];    
    
    i=0;
    while(i<n)
    {
      cin>>a[i]; i++;	//input array
    }
    
    cout<<"A[] = {";
    i=0;
    while(i<n)			
    {					//output array
		cout<<a[i];
		if(i==n-1)
			cout << "}" << endl;	
		else 
			cout << ", ";
		i++;
    }
    
    cout << "X = "; cin >> x;
    i=0;
    int hitung = 0;
    while(i<n)
    {					//count how many elements which are <= X
		if (a[i] <= x)
			{hitung++;}
		i++;	
	}
    cout << "Output: " << endl << hitung;	//output
}
