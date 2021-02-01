#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	int cnt1 = 0;
  	int cnt2 = 0;
  	for (int i = 0; i < n; i++) {
  		int c;
  		cin >> c;
  		if (c == 1) {
  			// count the number of 1-gram candies
  			cnt1++;
  		} else {
  			// count the number of 2-grams candies
  			cnt2++;
  		}
  	}
  	// get the sum of 1-gram and 2-grams of candies
  	// 2 * cnt2 = conversion to 1-gram candies
  	if ((cnt1 + 2 * cnt2) % 2 != 0) {
  		// if the sum is odd, then the answer is no
      cout << "NO";
  	} else {                                          	
  		int sum = (cnt1 + 2 * cnt2) / 2;
			// check if the sum is even or if the sum is odd and there are 1-gram candies then we can see that it can be
			// distributed to the Alice or Bob to achieve equilibrium 	
 			if (sum % 2 == 0 || (sum % 2 == 1 && cnt1 != 0)) {
 				cout << "YES";
 			} else {
 				// otherwise, it cannot be divided equally
        cout << "NO";
      }
 		}
  	cout << '\n';
  } 
  return 0;
}      
