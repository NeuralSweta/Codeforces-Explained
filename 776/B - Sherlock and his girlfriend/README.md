<h2><a href="https://codeforces.com/contest/776/problem/B" target="_blank" rel="noopener noreferrer">776B — Sherlock and his girlfriend</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 776B](https://codeforces.com/contest/776/problem/B) |

## Topics
`constructive algorithms` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Sherlock and his girlfriend</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Sherlock has a new girlfriend (so unlike him!). Valentine's day is coming and he wants to gift her some jewelry.</p><p>He bought <span class="tex-span"><i>n</i></span> pieces of jewelry. The <span class="tex-span"><i>i</i></span>-th piece has price equal to <span class="tex-span"><i>i</i> + 1</span>, that is, the prices of the jewelry are <span class="tex-span">2, 3, 4, ... <i>n</i> + 1</span>.</p><p>Watson gave Sherlock a challenge to color these jewelry pieces such that two pieces don't have the same color if the price of one piece is a prime divisor of the price of the other piece. Also, Watson asked him to minimize the number of different colors used.</p><p>Help Sherlock complete this trivial task.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains single integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 100000</span>) — the number of jewelry pieces.</p></div><div class="output-specification"><div class="section-title">Output</div><p>The first line of output should contain a single integer <span class="tex-span"><i>k</i></span>, the minimum number of colors that can be used to color the pieces of jewelry with the given constraints.</p><p>The next line should consist of <span class="tex-span"><i>n</i></span> space-separated integers (between <span class="tex-span">1</span> and <span class="tex-span"><i>k</i></span>) that specify the color of each piece in the order of increasing price.</p><p>If there are multiple ways to color the pieces using <span class="tex-span"><i>k</i></span> colors, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002729475899474333" id="id007005180383378621" class="input-output-copier">Copy</div></div><pre id="id002729475899474333">3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006235600157303872" id="id0020251539521137052" class="input-output-copier">Copy</div></div><pre id="id006235600157303872">2<br>1 1 2 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013504920078012494" id="id004156855377891969" class="input-output-copier">Copy</div></div><pre id="id0013504920078012494">4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024392491889194123" id="id008628944032944585" class="input-output-copier">Copy</div></div><pre id="id0024392491889194123">2<br>2 1 1 2<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first input, the colors for first, second and third pieces of jewelry having respective prices <span class="tex-span">2</span>, <span class="tex-span">3</span> and <span class="tex-span">4</span> are <span class="tex-span">1</span>, <span class="tex-span">1</span> and <span class="tex-span">2</span> respectively.</p><p>In this case, as <span class="tex-span">2</span> is a prime divisor of <span class="tex-span">4</span>, colors of jewelry having prices <span class="tex-span">2</span> and <span class="tex-span">4</span> must be distinct.</p></div>


🐢 Approach 1: Brute Force
💡 Idea

One straightforward approach is:

Try assigning colors to the jewelry pieces.
For every pair of pieces with the same color:
Calculate the sum of their prices.
Check whether the sum is prime.
If the sum is prime, the coloring is invalid.
Try different color combinations until a valid coloring is found.

However, this approach is extremely inefficient.

❌ Why Brute Force Fails

Suppose we try all possible color assignments.

For n jewelry pieces and k colors, the number of possible assignments can become extremely large.

Even after choosing a coloring, checking all pairs requires:

O(n²)

because there can be approximately:

n × (n - 1) / 2

pairs.

For example:

n = 1000

Number of pairs ≈ 500,000

Trying multiple color assignments makes the problem even more expensive.

Therefore, brute force is unnecessary.

We need to find a mathematical observation.

💡 Key Observation

The prices are:

2, 3, 4, 5, 6, 7, ...

Consider the parity of numbers.

Important Fact

Except for 2, every prime number is odd.

Now observe:

Even + Odd = Odd

and:

Odd + Odd = Even
Even + Even = Even

Every prime number greater than 2 is odd.

Therefore:

Two odd numbers
Odd + Odd = Even

Their sum can only be prime if the sum is 2.

But two positive odd numbers are at least:

1 + 1 = 2

For our prices, the smallest odd numbers are 3 and 5:

3 + 5 = 8

which is not prime.

So all odd prices can safely have the same color.

🔍 What About Even Numbers?

The sum of two even numbers is also even.

Since both prices are at least 2, their sum is greater than 2.

Therefore:

Even + Even = Even number greater than 2

which can never be prime.

So all even prices can safely have the same color as well.

⚡ Optimized Approach

We divide all prices into two groups:

Group 1: Even numbers
2, 4, 6, 8, ...
Group 2: Odd numbers
3, 5, 7, 9, ...

Then:

Even + Even = Even > 2 → Not Prime

and:

Odd + Odd = Even > 2 → Not Prime

Therefore, at most 2 colors are required.

🧠 Special Case

If n ≤ 2, the prices are:

n = 1
2

There is only one jewelry piece.

Only one color is needed.

n = 2
2, 3

There are only two pieces, and they can be assigned the same color because the condition is checked for pieces of the same color and the required arrangement can be achieved with one color under the problem's condition.

For larger values of n, two colors are sufficient.

📝 Algorithm
Generate all prime numbers up to n + 1 using the Sieve of Eratosthenes.
Assign colors based on whether the price is prime or composite:
Prime number → Color 2
Composite number → Color 1
Output the number of colors used.
Output the color of each jewelry piece.
🔬 Sieve of Eratosthenes

To determine whether each number is prime, we use the Sieve of Eratosthenes.

Initially:

prime[i] = true

for every number.

Then for every prime i, mark all multiples of i as non-prime:

i × i
i × (i + 1)
i × (i + 2)
...

The sieve runs in:

O(n log log n)

time.

🧪 Dry Run

Suppose:

n = 5

Prices are:

2, 3, 4, 5, 6

Prime status:

Price	Prime?	Color
2	Yes	2
3	Yes	2
4	No	1
5	Yes	2
6	No	1

Output:

2
2 2 1 2 1

The important idea is that prime and composite numbers are placed in different groups.

⏱️ Complexity Analysis

Let:

N = n + 1
Time Complexity

The Sieve of Eratosthenes takes:

O(N log log N)

The coloring loop takes:

O(N)

Therefore:

Overall Time Complexity = O(N log log N)

or simply:

O(n log log n)
Space Complexity

We store the primality status of every number:

O(N)

Therefore:

Space Complexity = O(n)
💻 Implementation
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> prime(n + 2, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n + 1; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n + 1; j += i) {
                prime[j] = false;
            }
        }
    }

    cout << (n <= 2 ? 1 : 2) << '\n';

    for (int i = 2; i <= n + 1; i++) {
        if (prime[i])
            cout << 2 << " ";
        else
            cout << 1 << " ";
    }

    return 0;
}
⚠️ Common Mistakes
1. Creating an unnecessary price array

The prices are already:

2, 3, 4, ..., n + 1

So we can directly use the loop variable:

for (int i = 2; i <= n + 1; i++)

No separate price[] array is needed.

2. Incorrect Sieve Boundaries

We need to find primes up to:

n + 1

Therefore, the sieve must also run until:

n + 1
3. Starting from i instead of i * i

The optimized Sieve of Eratosthenes starts marking multiples from:

i * i

because smaller multiples have already been marked by smaller prime factors.

4. Forgetting that 0 and 1 are not Prime

Always set:

prime[0] = false;
prime[1] = false;
🎯 Key Learning

This problem teaches an important competitive programming lesson:

Do not immediately try to construct a solution by brute force. First look for mathematical properties.

The key property is:

Even + Even = Even
Odd + Odd = Even

Since every prime number greater than 2 is odd, sums of two suitable same-parity numbers can be guaranteed to be non-prime.

The bigger lesson is:

Constraints
      ↓
Mathematical Observation
      ↓
Simple Construction
      ↓
Efficient Solution
