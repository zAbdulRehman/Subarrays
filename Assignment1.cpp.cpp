//ABDUL REHMAN
//18I-923
//Section:A
//Assignment 01
//06-02-2020
#include<iostream>
using namespace std;
void subArray(int arr[], int n) 
{ 
    for (int i=0; i <n; i++) 
    {  
        for (int j=i; j<n; j++) 
        { 
            for (int k=i; k<=j; k++) 
                cout << "{"<<arr[k] << "}" ; 
            cout << endl; 
        } 
    } 
} 

int main()
{
	int n,sum_tot = 0;
	int arr[n];
	int sum=0;
	cout<<"enter array size: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "All Non-empty Subarrays\n"; 
    subArray(arr, n);
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;j++){
		 sum|=arr[j];
		 cout<<"sum : "<<sum<<endl;
		sum_tot += sum;
		}
    sum=0;	
	}
		cout<<"total sum "<<sum_tot;
}
