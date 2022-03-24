#include <iostream>
using namespace std;

int main()
{
    int t,n,i,k;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter size of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements of array: ";
        for(i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Enter the element to be found: ";
        cin>>k;
        for(i=0;i<n;i++)
        {
            if(k==arr[i])
            {
                cout<<"Element found in the array at location: "<<i+1<<endl;
                cout<<"Total number of comparisons: "<<i+1<<endl;
                break;
            }
        }
        if(i==n)
        {
            cout<<"Element not found in the array."<<endl;
            cout<<"Total number of comparisons: "<<n<<endl;
        }
    }
    return 0;
}
