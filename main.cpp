#include<bits/stdc++.h>
using namespace std;
int main()
{
    //N is size of array
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    //Target is the sum required
    int target;
    cin>>target;
    //Sorting array using sort function of STL
    sort(arr,arr+N);
    int i=0,j,k;
    while(i<N)
    {
        j=i+1;
        k=N-1;
        while(j<k)
        {
            if(arr[i]+arr[j]+arr[k]==target)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                j++;
                k--;
            }
            else if(arr[i]+arr[j]+arr[k]>target)
                {
                k--;
            }
            else if(arr[i]+arr[j]+arr[k]<target)
            {
                j++;
            }
        }
        i++;
    }
    return 0;
}
