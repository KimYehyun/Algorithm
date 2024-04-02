#include <bits/stdc++.h>
using namespace std;

int arr[1000000];
int n;
int sum, avg;
int u_top, bot; 

int main(void){ 
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
	cin >> n;	
    
	for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    avg=sum/n; 
    
    for(int i=0;i<n;i++)
        if(arr[i]<avg) bot+=avg-arr[i]; 
        else if(arr[i]>avg+1) u_top+=arr[i]-(avg+1); 
        
    if(u_top<=bot) cout << bot; 
    else cout << u_top; 

    return 0;
}
