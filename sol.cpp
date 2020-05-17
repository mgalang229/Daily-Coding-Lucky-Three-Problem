// Using C++ by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

void decode(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < 3; j++){
			cout << s[i];
		}
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	cout << "\n";
	return 0;
}
