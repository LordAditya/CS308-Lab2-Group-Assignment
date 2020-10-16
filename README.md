# CS308-Lab2-Group-Assignment

This is the repository for our Lab2 PartB Group Assignment. We have made a library for performing operations on R^4 vectors which can be modified to any n-dim vectors also.

## Compiling the Code
- run: gcc -o abc vecmain.c vecadd.c vecnorm.c vecprod.c vecdot.c vecangle.c

## Give Input
Example
Input Vector A (vecA): <br>
1 2 3 4 <br>
Input Vector B (vecB): <br>
5 6 7 8 <br>

## Output
Input vector A (vecA) : <br>
1 2 3 4 <br>
Input vector B (vecB) : <br>
5 6 7 8 <br>
1.000000 2.000000 3.000000 4.000000 <br> <br>

5.000000 6.000000 7.000000 8.000000 <br> <br>

Printing vector sum <br>
6.000000 8.000000 10.000000 12.000000 <br> <br>

Printing vector-element wise product, vecA*vecB <br>
5.000000 12.000000 21.000000 32.000000 <br> <br>

Printing vector-difference, vecA-vecB <br>
-4.000000 -4.000000 -4.000000 -4.000000 <br> <br>

Printing dot-product, vecA.vecB <br>
70.000000 <br> <br>
Printing angle between vecA and vecB, vecA-vecB <br>
0.250196 <br>
## Contributors
A. Aditya Pandey B18044 <br>
B. Shrikha B18143 <br>
C. Nishita B18181 <br>
D. Vinayak Gupta B18090 <br>
E. Debajyoti Nath B18052 <br>
