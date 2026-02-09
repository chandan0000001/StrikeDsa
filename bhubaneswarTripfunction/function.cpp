// bool isAllocateBook(vector<int> &arr, int maxPages ,int k){
// 	int count=1; int pages=arr[0];int n = arr.size();
// 	for(int i=1;i<n;i++){
// 		pages+=arr[i];
// 		if(pages>maxPages){
// 			pages=arr[i];
// 			count++;
// 		}
// 	}
// 	return count<=k;
// }

// // bool allocateBook(int maxPages,vector<int>& arr,int k){

// //     //count >> no of student , pages > as per count how the page is got by the sstudent ;
// //     int count=1;
// //     int pages=arr[0];
// //     for(int i=1;i<arr.size();i++){
// //         pages=pages+arr[i];
// //         if(pages>maxPages){
// //             count++;
// //         pages=arr[i];
// //         }
// //     }
// //     return count<=k;
// // }


// int findPages(vector<int> &arr, int k) {
//     // Your code here
// // int n = arr.size();
// //  if(k>n){return -1;}
// //  int start=0,end=0,ans=-1;
// //  for(int i=0;i<n;i++){
// //     start=max(start,arr[i]);
// //     end += arr[i];
// //  }
// //  while (start<=end)
// //  {
// //     int mid = start+(end-start)/2;
// //     //mid = maxPages 
// //     if(allocateBook(mid,arr,k)){
// //         ans=mid;
// //         end=mid-1;
// //     }else{
// //         start=mid+1;
// //     }
// //  }
 
// // return ans;


// //revision code here
// int n = arr.size();

// if(k>n){return -1;} 
// int start = 0,end=0,ans=0;

// for(int i=0;i<n;i++){
// 	start=max(start,arr[i]);
// 	end+=arr[i];
// }

// //apply binary search 
// while(start<=end){
// 	int mid=start+(end-start)/2;
// 	if(isAllocateBook(arr,mid,k)){
// 		ans=mid;
// 		end=mid-1;	
// 	}
// 	else{
// 		start=mid+1;
// 	}
// }
// return ans;

// }









// // bool isPaintingPossible(int maxPaint , vector<int>& arr,int k){

// //     int count = 1,paint=arr[0],n=arr.size();
// //     for(int i=1;i<n;i++){
// //         paint+=arr[i];
// //         if(paint>maxPaint){
// //             count++;
// //             paint=arr[i];
// //         }
// //     }
// //     return count<=k;
// // }



// bool isOptimalAllocation(int maxPainter,vector<int> &arr, int k){
// 	int count = 1;int painters=arr[0];int n= arr.size();
// 	for(int i=1;i<n;i++){
// 		painters=painters+arr[i];
// 		if(painters>maxPainter){
// 			count++;
// 			painters=arr[i];
// 		}
// 	}
// 	return count<=k;
// }


// int minTime(vector<int> &arr, int k) {
//     // Your code here
//     // int n = arr.size();
//     // int start=0,end=0,ans;
//     // for(int i=0;i<n;i++){
//     //     start=max(start,arr[i]);
//     //     end+=arr[i];
//     // }
//     // while (start<=end)
//     // {
//     //     int mid=start+(end-start)/2;
//     //     //mid >> maxPaint
//     //     if(isPaintingPossible(mid,arr,k)){
//     //         ans=mid;
//     //         end=mid-1;
//     //     }else{
//     //         start=mid+1;
//     //     }
//     // }
//     // return ans;



// 	int n = arr.size();
// 	int start=0,end=0,ans=0;
// 	for(int i=0;i<n;i++){
// 		start=max(start,arr[i]);
// 		end=end+arr[i];
// 	}

// 	while(start<=end){
// 		int mid=start+(end-start)/2;
// 		if(isOptimalAllocation(mid,arr,k)){
// 			ans=mid;
// 			end=mid-1;
// 		}else{
// 			start=mid+1;
// 		}
// 	}
// 	return ans;



// }






