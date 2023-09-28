# 1. Bitwise Operators

# Theory:
Operators in C++ can be classified into :

* Arithmetic Operators
* Assignment Operators
* Relational Operators
* Logical Operators
* Bitwise Operators

### 1. Arithmetic Operators
'+'	Addition  
'-'	Subtraction  
'*'	Multiplication  
'/'	Division  
'%'	Modulus Operation (Remainder after division)

### 2. Assignment Operators
=	---------------------a = b;  
+=	-------------------a = a + b;  
-=	--------------------a = a - b;  
*=	--------------------a = a * b;  
/=	--------------------a = a / b;  
%=	-------------------a = a % b;

### 3. Relational Operators
==	-------------------Is Equal To  
!=	--------------------Not Equal To  
'>	--------------------Greater Than  
<	---------------------Less Than  
'>=	------------------Greater Than or Equal To  
<=	-------------------Less Than or Equal To

### 4. Logical Operators
&&	------------------Logical AND  
||	---------------------Logical OR  
!	---------------------Logical NOT

### 5. Bitwise Operators
&	--------------------Binary AND  
|	---------------------Binary OR  
^	--------------------Binary XOR  
~	--------------------Binary One's Complement  
<<	------------------Binary Shift Left  
'>>	-----------------Binary Shift Right

# Explanation:
We perform logical operations on num3 and num4 using && (logical AND), || (logical OR), and ! (logical NOT).

We perform bitwise operations on num3 and num4 using & (bitwise AND), | (bitwise OR), ^ (bitwise XOR), and ~ (bitwise complement). The results are displayed.


# 2. Bit Shifting

# Theory:

* ### Left Shift(<<)  
It is a binary operator that takes two numbers, left shifts the bits of the first operand, and the second operand decides the number of places to shift. In other words, left-shifting an integer “a” with an integer “b” denoted as ‘(a<<b).  

If a=2; which is 0010 in Binary Form. Now, if a is left-shifted by 2 i.e (a=a<<2) then a can be written as 1000 i.e. (a=8).


* ### Right Shift(>>)
It is a binary operator that takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. In other words, right-shifting an integer “a” with an integer “b” denoted as ‘(a>>b).

If a=6; which is 0110 in Binary Form. Now, if a is right-shifted by 1 i.e (a=a>>1) then a can be written as 0011 i.e. (a=3).

# Explanation:

* ## int num = 2 :  
Here, we declare an integer variable num and initialize it with the value 2.

* ## cout << (num | (1 << 3)) :  
This line performs a bitwise OR operation between num and the result of the expression 1 << 3.

* 1 << 3 is a bitwise left shift operation. It shifts the binary representation of 1 three positions to the left, resulting in 1000 (which is 8 in decimal).
* num | (1 << 3) performs a bitwise OR (|) operation between num (which is 2) and the result of the left shift (which is 8).  

* The OR operation combines the bits such that if either bit is 1, the result bit is 1. In binary, this operation would look like 0010 | 1000, which results in 1010 (which is 10 in decimal).
* Finally, the result of the bitwise OR operation, which is 10, is printed to the console.

# 3. Bit Shifting_1

## Explanation:

* ### int num = 13 :  
Here, we declare an integer variable num and initialize it with the value 13.

* ### cout << (num ^ (1 << 2)) :  
This line performs a bitwise XOR operation between num and the result of the expression 1 << 2.

* 1 << 2 is a bitwise left shift operation. It shifts the binary representation of 1 two positions to the left, resulting in 0100 (which is 4 in decimal).
* num ^ (1 << 2) performs a bitwise XOR (^) operation between num (which is 13) and the result of the left shift (which is 4). The XOR operation combines the bits such that if the bits being compared are different, the result bit is 1; otherwise, it's 0. In binary, this operation would look like 1101 ^ 0100, which results in 1001 (which is 9 in decimal).
* Finally, the result of the bitwise XOR operation, which is 9, is printed to the console.

# 4. Bit Shifting_2

## Explanation:

* ### int num = 13 :  
Here, we declare an integer variable num and initialize it with the value 13.

* ### cout << (num & ~(1 << 2)) :  
This line performs a bitwise AND operation between num and the bitwise negation (~) of the result of the expression 1 << 2

* 1 << 2 is a bitwise left shift operation. It shifts the binary representation of 1 two positions to the left, resulting in 0100 (which is 4 in decimal).

* ~(1 << 2) is the bitwise negation (complement) of the result of the left shift. It inverts all the bits. Which is -5 in two's complement representation.

* num & ~(1 << 2) performs a bitwise AND (&) operation between num (which is 13) and the result of the negation (which is -5). The AND operation combines the bits such that if both bits being compared are 1, the result bit is 1; otherwise, it's 0. Which results in 1001 (which is 9 in decimal).

* Finally, the result of the bitwise AND operation, which is 9, is printed to the console.


