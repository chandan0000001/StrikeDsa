// 64. Smallest Distinct Window

// Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once.

// Example 1:
// Input: str = "aabcbcdbca"
// Output: 4
// Explanation:
// Sub-String "dbca" has the smallest length that contains all the characters of str.
// Example 2:
// Input: str = "aaab"
// Output: 2
// Explanation:
// Sub-String "ab" has the smallest length that contains all the characters of str.
// Constraints:
// • 1 <= n <= 10⁵ (string length)
// • Need only distinct characters




// int findSubString(string str) {
//     // Your code here
// 	//count the unique character 
// 	int uniqueChar=0;int n=str.size();
// 	bool freq[256]={0};
// 	for(int i=0;i<n;i++){
// 		if(freq[str[i]]==0){
// 			freq[str[i]]=1;
// 			uniqueChar++;
// 		}
// 	}

// 	//main sliding issue dimag khara walal part 
// 	int s=0,e=0,answer=str.size();
// 	//second freq denoted by count
// 	int count[256]={0};
// 	int currentUniqueChar=0;
//     while(e<n){
// 		count[str[e]]++;
// 		 if(count[str[e]]==1){
// 			currentUniqueChar++;
// 		 }
// 		 //compare current unique char with unique char nad make smaller the window 
// 		 while(currentUniqueChar==uniqueChar){
// 			answer=min(answer,e-s+1);
// 			//count must be decress while mcving the start pointer 
// 			count[str[s]]--;
// 			if(count[str[s]]==0){
// 				//now time uqiue hcaracter value shoukld be decreasesd
// 				currentUniqueChar--;
// 			}
// 			s++;
// 		 }
// 		 e++;
// 	}
// 	return answer;




// }