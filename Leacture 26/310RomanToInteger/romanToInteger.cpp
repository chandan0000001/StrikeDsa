// 310. Roman to Integer


// Convert a given Roman Numeral string s to its integer representation. The representation uses the symbols {I, V, X, L, C, D, M} with respective values {1, 5, 10, 50, 100, 500, 1000}.

// Conversion Rules

// Roman numerals are converted by processing the string from left to right using the following rules:

//     Standard Conversion

//         If a symbol is followed by another symbol of equal or lesser value, add its value to the total.

//         The last symbol in the string is always added.

//     Subtractive Forms

//         If a symbol is followed by another symbol of greater value, it represents a subtractive form.

//         Subtract the current symbol's value from the total (effectively next_value - current_value).

//         Only the following pairs form valid subtractive notation:

//             IV (4), IX (9)

//             XL (40), XC (90)

//             CD (400), CM (900)

//     Repetition Constraints

//         I, X, C, and M can appear at most three times consecutively.

//         V, L, and D cannot be repeated consecutively.

// Example 1:
// Input: s = "II"
// Output: 2
// Example 2:
// Input: s = "XV"
// Output: 15
// Constraints:
// • $1 <= s.length <= 15$
// • s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
// • It is guaranteed that s is a valid Roman numeral in the range $[1, 3999]$




// class Solution {
// public:

// 	bool isNextcharBigger(char first,char second){
// 		string rom= "IVXLCDM";
// 		if(first==second){
// 			return false;// xx = 10
// 		}

// 		int v1=findvalue(first); int v2=findvalue(second);
// 		if(v1<v2){
// 			return true;
// 		}else{
// 			return false;
// 		}
// 		// for(int i=0;i<7;i++){
// 		// 	if(first==rom[i]){
// 		// 		return true;
// 		// 	}else if(second==rom[i]){
// 		// 		return false;
// 		// 	}
// 		// }


// 	}
// 	int findvalue(char c){
// 		string rom = "IVXLCDM";
// 		int num[7]={1,5,10,50,100,500,1000};
// 		for(int i=0;i<7;i++){
// 			if (c==rom[i]){
// 				return num[i];
// 			}
// 		}
// 		return 0;
// 	}
//     int romanToInt(string s) {
//         //Code here
// 		//logic is iv point to i if netxt characgter id bigger then subtract it otherwise make it +ve
// 		int n = s.size();int answer=0;
// 		int index = 0;
// 		while(index<n-1){
// 			//check the next char bigger 
// 			if(isNextcharBigger(s[index],s[index+1])){
// 				answer-=findvalue(s[index]); //iv = -1+5=4
// 			}
// 			//if the next  chaacter is small
// 			else{
// 				answer+=findvalue(s[index]); //xx = 10
// 			}
// 			index++;
// 		}
// 		answer += findvalue(s[n-1]);
// 	return answer;
//     }
// };