/*Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
 
Examples : 

Input: GEEKSFORGEEKS
Output: 4333355777733366677743333557777
Explanation: For obtaining a number, we need to press a number corresponding to that character for a number of times equal to the position of the character. For example, for character E, press number 3 two times and accordingly.*/

// solution
#include <bits/stdc++.h> 
string covertSentence(string s, int n){
	unordered_map<char , string> m;
	m['A'] = "2";
	m['B'] = "22";
	m['C'] = "222";
	m['D'] = "3" ,m['E'] = "33" ,m['F'] = "333" ,m['G'] = "4" ,m['H'] = "44" ,m['I'] = "444" ,m['J'] = "5" ,m['K'] = "55" ,m['L'] = "555" ,m['M'] = "6" ;
	m['N'] = "66" ,m['O'] = "666" ,m['P'] = "7" ,m['Q'] = "77" ,m['R'] = "777" ,m['S'] = "7777" ;
	m['T'] = "8" ,m['U'] = "88" ,m['V'] = "888";
	m['W'] = "9" ,m['X'] = "99" ,m['Y'] = "999" ,m['Z'] = "9999";
	string ans = "";
	for(int i = 0; i < n; i++){
		ans += m[s[i]];
	}
	return ans;
}
