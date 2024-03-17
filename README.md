<h1 align="center">
  Kadane's Algorithm :upside_down_face:
</h1>
Kadane's algorithm is a dynamic programming approach used to solve the maximum subarray problem, which involves finding the contiguous subarray with the maximum sum in an array of numbers. The algorithm was proposed by Jay Kadane in 1984 and has a time complexity of O(n).

<h1 align="center">
  Working of Kadene's Algorithm :eye_speech_bubble:
</h1>
Kadane's algorithm is widely used in computer science and has become a classic example of dynamic programming. Its simplicity, efficiency, and elegance have made it a popular solution to the maximum subarray problem and a valuable tool in algorithm design and analysis.
<h3 align="center">
The algorithm works by iterating over the array and keeping track of the maximum sum of the subarray ending at each position. At each position i, we have two options: either add the element at position i to the current maximum subarray or start a new subarray at position i. The maximum of these two options is the maximum subarray ending at position i.
We maintain two variables, max_so_far and max_ending_here, to keep track of the maximum sum seen so far and the maximum sum ending at the current position, respectively. The algorithm starts by setting both variables to the first element of the array. Then, we iterate over the array from the second element to the end.
At each position i, we update max_ending_here by taking the maximum of the current element and the current element added to the previous maximum subarray. We then update max_so_far to be the maximum of max_so_far and max_ending_here.
</h3>
