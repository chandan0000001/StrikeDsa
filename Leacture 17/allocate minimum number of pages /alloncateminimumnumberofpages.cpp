// 29. Allocate minimum number of pages
// You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students.
// Your task is to allocate books to each student such that:
// • Each student receives at least one book.
//     • Each student is assigned a contiguous sequence of books.
//     • No book is assigned to more than one student.
// The objective is to minimize the maximum number of pages assigned to any student. In other words, find the allocation arrangement where the student who receives the most pages has the smallest possible maximum.
// Return the minimum possible maximum pages, or -1 if the allocation is not possible.
// Example 1:
// Input: arr = [12, 34, 67, 90] k = 2
// Output: 113
// Explanation:
// The books can be allocated as , Student 1: with total pages = 113​ and  Student 2: with total pages = 90​.
// The maximum pages allocated to any student here is 113, which is the minimized maximum.
// Example 2:
// Input: arr = [15, 17, 20] k = 5
// Output: -1
// Explanation:
// Since the number of students k is greater than the number of books, it is impossible to allocate at least one book to every student.
// Hence, the answer is -1.

