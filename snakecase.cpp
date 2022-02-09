#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	string str;
    
    cout << "Input:\nN = "; cin >> n;					//input
    cout << "S = "; cin.ignore(); getline(cin,str);		//input
		
	str.resize(n);										//resize according to n
    transform(str.begin(), str.end(), str.begin(), ptr_fun<int, int>(tolower));	//transform to lowercase
	replace(str.begin(), str.end(), ' ', '_');			//replace spaces with underscore
	
	cout << "Output: ";cout << str;						//output
}
