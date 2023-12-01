<h2><a href="https://practice.geeksforgeeks.org/problems/k-pangrams0909/1?page=1&category=Strings&company=Zoho&difficulty=Easy&status=unsolved&sortBy=submissions">K-Pangrams</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string str and an integer K, find whether the string can be changed into a pangram after <strong>at most k</strong> operations. A pangram is a sentence containing every letter in the english alphabet. A single operation can be used to swap an existing alphabetic character with any other alphabetic character.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>str = "the quick brown fox jumps over the lazy dog"
k = 0
<strong>Output: </strong>1
<strong>Explanation:</strong> the sentence contains all 26 characters 
and is already a pangram. </span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
str = "aaaaaaaaaaaaaaaaaaaaaaaaaa"
k = 25
<strong>Output:</strong> 1
<strong>Explanation: </strong>The word contains 26 instances of 'a'.
Since only 25 operations are allowed. We can keep
1 instance and change all others to make str a pangram.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>kPangram() </strong>which takes str and k as input parameters and returns a boolean value which denotes if pangram is possible or not.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N) where N is length of str.<br>
<strong>Expected Auxiliary Space: </strong>O(1) &nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;= N &lt;= 10<sup>4</sup><br>
String may contain duplicate characters.<br>
String can contain only lowercase alphabets or space.</span></p>

<p>&nbsp;</p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Snapdeal</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;