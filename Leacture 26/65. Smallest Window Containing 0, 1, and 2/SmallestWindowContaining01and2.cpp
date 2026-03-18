// 65. Smallest Window Containing 0, 1, and 2


// Given a string S consisting of the characters 0, 1, and 2, find the length of the smallest substring of string S that contains all three characters 0, 1, and 2. If no such substring exists, return -1.

// Example 1:
// Input: S = 10212
// Output: 3
// Explanation:
// The substring 102 is the smallest substring
// that contains the characters 0, 1 and 2.
// Example 2:
// Input: S = 12121
// Output: -1
// Explanation:
// As the character 0 is not present in the
// string S, therefor no substring containing
// all the three characters 0, 1 and 2
// exists.
// Hence, the answer is -1 in this case.
// Constraints:
// • 1 <= N <= 10⁵
// • s contains only characters 0, 1, and 2


// int smallestSubstring(string &S) {
//     int n=S.size();int ans=INT_MAX;int freq[3]={0};
// 	int start=0;int end;
// 	for(end=0;end<n;end++){
// 		//add the current char from S to put in freq and increass it 
// 		freq[S[end]-'0']++;//inclese the value of the current position in freq array 
// 		// end++;//next itirate in S string //check the valied condion in frq array
// 	     while(freq[0]>0&&freq[1]>0&&freq[2]>0){
// 		//update the answeer
// 		 ans=min(ans,(end-start)+1);
// 		 //shrink the window
// 		 freq[S[start]-'0']--;
// 		  start++;
// 	    }
	
// 	  }
// 	    if(ans==INT_MAX){
// 		ans=-1;
// 	   }
// 	return ans;
// }


