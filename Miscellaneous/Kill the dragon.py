""" A brave knight prepares for battle with a dragon. According to his data, 
the dragon has mutated somewhat since the last fairy tale, 
and now he has a heads and b tails. 
A knight can cut off one or two heads or one or two tails in one strike. He knows, that:

if you cut off one tail, two new tails grow,
if you cut off two tails, one new head grows,
if you cut off one head, one new tail grows,
if you cut off two heads, nothing grows.
To defeat the dragon, you need to cut off all his heads and all his tails. 
Help the knight to do this by making no more than 1000 strikes.

Input
The input contains two integers a and b (1≤A,B≤100).

Output
Print the sequence of strikes in the order in which they should be performed by encoding them with the 
following combinations of letters: "T" (one tail), "TT" (two tails), "H" (one head), "HH" (two heads).

Example
input
3 1
output
T
TT
HH
HH
==================================
"""

# SOLUTION


heads, tails = map(int, (input().split()))
    
while heads > 0 and tails > 0:
    if tails % 2 == 1:
        tails += 1
        print("T")
        while tails != 0:
            tails -= 2
            heads += 1
            print("TT")
    elif tails % 2 == 0:
        while tails != 0:
            tails -= 2
            heads += 1
            print("TT")
    
    if heads % 2 == 0:
        while heads != 0:
            heads -= 2
            print("HH")
    else:
        heads -= 1
        print("H")
        print("H")
        print("TT")
        while heads != 0:
            heads -= 2
            print("HH")
        
