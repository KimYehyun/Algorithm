#include<iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string str1, str2;
	
    while(cin >> str1 >> str2){
        int idx1 = 0, idx2 = 0;
        int len1 = str1.size();
    	int len2 = str2.size();
    	int cnt = 0;
    	while (1) {
    		if (idx1 == len1 || idx2 == len2) break;
    		if (str1[idx1] == str2[idx2]) {
    			idx1++;
    			idx2++;
    			cnt++;
    		}
    		else {
    			idx2++;
    		}
    	}
    
    	if (cnt == len1) cout << "Yes" << "\n";
    	else cout << "No" << "\n";

	}
	return 0;
}
