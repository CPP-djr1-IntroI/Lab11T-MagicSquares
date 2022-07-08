## Intro to C++ I Lab 11
 
Two-dimensional Arrays & Functions

**Goals:**

1.  Use functions in conjunction with 2D arrays

2.  Use well-defined functions with nested logic

3.  Use the debugger effectively especially when arrays go out of bounds


**Lab 11**

Write a program that will determine whether a two-dimensional array of
integers is a magic square or not.

A magic square is an array of numbers from 1 to N<sup>2</sup>, such that the sum
of the numbers in each row, each column, and each diagonal is the same.
Here is an example of a 3x3 magic square:

<pre>
  2  7  6
  9  5  1
  4  3  8
  
  2 + 7 + 6; 9 + 5 + 1; 4 + 3 + 8 (each row = 15)
  2 + 9 + 4; 7 + 5 + 3; 6 + 1 + 8 (each column = 15)
  2 + 5 + 8; 6 + 5 + 4 (each diagonal = 15)
 </pre>

Clone the partially completed solution and finish writing each unfinished function.

The input file:

<pre>
4
3
2 7 6
9 5 1
4 3 8

3
2 7 6
9 9 1
4 3 8

4
7 12 1 14
2 13 8 11
16 3 10 5
9 6 15 4

6
6 32 3 34 35 1
7 11 27 28 8 30
19 14 16 15 23 24
18 20 22 21 17 13
25 29 10 9 26 12
36 5 33 4 2 31
</pre>

will produce this output to the screen:

<pre>
*** Magic Squares ***

Square 1:

   2   7   6
   9   5   1
   4   3   8

Magic Square

Square 2:

   2   7   6
   9   9   1
   4   3   8

Not a Magic Square

Square 3:

   7  12   1  14
   2  13   8  11
  16   3  10   5
   9   6  15   4

Magic Square

Square 4:

   6  32   3  34  35   1
   7  11  27  28   8  30
  19  14  16  15  23  24
  18  20  22  21  17  13
  25  29  10   9  26  12
  36   5  33   4   2  31

Magic Square
</pre>
    
**To complete this assignment you must submit the following:**

1.  **An electronic Solution of your program on GitHub**

    a.  You are to click on the Lab11 Link on The C++ Tutorials in the section Data Input to accept this
        assignment as we've done before. Once accepted, code up a
        complete solution to each project specified above. Your
        complete solution is to be pushed to GitHub no later than the
        date and time specified above for your specific section. I will
        only grade your solution from the proper location on GitHub.

    b.  Pay attention to the example output above. Your program's output
        must look **exactly** like the example output! The spacing and
        newlines in your output must match exactly.

    c.  Make sure that your program compiles and runs correctly with no
        errors and no warnings. If you get any errors, double check that
        you typed everything correctly. Be aware that C++ is
        case-sensitive.

2.  **An electronic pdf (punetidLab11MagicSquare.pdf) 
of your program is to be emailed to ryandj@pacificu.edu**
