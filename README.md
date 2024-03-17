<h1 align="center">
  Kadane's Algorithm :upside_down_face:
</h1>
Kadane's algorithm is a dynamic programming approach used to solve the maximum subarray problem, which involves finding the contiguous subarray with the maximum sum in an array of numbers. The algorithm was proposed by Jay Kadane in 1984 and has a time complexity of O(n).

<h1 align="center">
  Working of Kadane's Algorithm :eye_speech_bubble:
</h1>
Kadane's algorithm is widely used in computer science and has become a classic example of dynamic programming. Its simplicity, efficiency, and elegance have made it a popular solution to the maximum subarray problem and a valuable tool in algorithm design and analysis.
<h3 align="center">
The algorithm works by iterating over the array and keeping track of the maximum sum of the subarray ending at each position. At each position i, we have two options: either add the element at position i to the current maximum subarray or start a new subarray at position i. The maximum of these two options is the maximum subarray ending at position i.
We maintain two variables, max_so_far and max_ending_here, to keep track of the maximum sum seen so far and the maximum sum ending at the current position, respectively. The algorithm starts by setting both variables to the first element of the array. Then, we iterate over the array from the second element to the end.
At each position i, we update max_ending_here by taking the maximum of the current element and the current element added to the previous maximum subarray. We then update max_so_far to be the maximum of max_so_far and max_ending_here.
</h3>

<img width="994" alt="Screenshot 2024-03-17 alle 17 27 28" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/78c71c5a-c58d-4f7b-a1b7-fec3b345053f">
<img width="998" alt="Screenshot 2024-03-17 alle 17 28 48" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/16cba4ca-161f-4582-ae48-765d01b93926">
<img width="1197" alt="Screenshot 2024-03-17 alle 17 29 17" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/6cd2da26-ddfd-48c4-a963-6f05b4d8b9f3">
<img width="1020" alt="Screenshot 2024-03-17 alle 17 30 14" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/1f586760-21b9-47aa-aabc-f932a0483887">
<img width="705" alt="Screenshot 2024-03-17 alle 17 30 54" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/521373b6-4d4c-4e4d-8963-67e973f6f118">


<h1 align="center">
  Example 2 :eye_speech_bubble:
</h1>
<img width="1337" alt="Screenshot 2024-03-17 alle 17 32 49" src="https://github.com/SimoneRemoli/Kadane-s-Algorithm/assets/118252611/9a2da75d-e038-4546-8dbe-d795c7acfb06">


