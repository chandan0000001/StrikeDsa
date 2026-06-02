// https : // strikes.in/practice/69b929123675dcf973617d8a

//         void insertAtBottom(stack<int> &st, int x)
// {
//     stack<int> newSt;
//     while (!st.empty())
//     {
//         // jabtak st namaka stack empty na hoo
//         newSt.push(st.top());
//         st.pop();
//     }
//     // given jo value x he usse push karo stack ke andanr
//     st.push(x);

//     while (!newSt.empty())
//     {
//         st.push(newSt.top());
//         newSt.pop();
//     }
// }