# TANIKA GOYAL 2023UCP1847
## TECHNICAL WRITING ASSIGNMENT (LAB 4)
### VECTOR DOT PRODUCT

**Vector is a quantity that has both magnitude and direction. Some mathematical operations can be performed on vectors such as addition and multiplication. The multiplication of vectors can be done in two ways, i.e. dot product and cross product.**

>This text has been copied from [Byjus](https://byjus.com/maths/dot-product-of-two-vectors/).

***The dot product of two vectors is the product of the magnitude of the two vectors and the cos of the angle between them:***

*a.b=|a||b| cosθ*

![DOT PRODUCT OF TWO VECTORS](https://cdn1.byjus.com/wp-content/uploads/2022/09/Dot-Product-Of-Two-Vectors-1.png)


- When angle between them is 0, the a.b = |a||b|
- When angle between them is 90, then a.b = 0
- When angle between them is 30, then a.b = |a||b|/2



WHAT HAVE WE LEARNT TILL NOW?
- [x] What is dot product?
- [x] How to compute it?
- [ ] Properties of dot product

**Dot Product Properties of Vector:**

1. Property 1: Dot product of two vectors is commutative i.e. a.b = b.a = ab cos θ.
2. Property 2: If a.b = 0 then it can be clearly seen that either b or a is zero or cos θ = 0. It suggests that either of the vectors is zero or they are perpendicular to each other.
3.  Also we know that using scalar product of vectors (pa).(qb)=(pb).(qa)=pq a.b
4. The dot product of a vector to itself is the magnitude squared of the vector a.a = a.a cos 0= a2
5. The dot product follows the distributive law also i.e. a.(b + c) = a.b + a.c

CODE FOR DOT PRODUCT [^1]

> [!NOTE]
> THE DOT PRODUCT AND CROSS PRODUCT ARE NOT SAME 

> [!TIP]
> WHILE PRACTISING CALCULATE BOTH SO AS TO UNDERSTAND THE DIFFERENCE

### TABLE SHOWING DIFFERENCE BETWEEN CROSS AND DOT PRODUCT

|DOT PRODUCT | CROSS PRODUCT |
| :--------: | :-------: |
| The dot product is the product of the magnitude of the vectors and the cos of the angle between them. |The cross product is the product of the magnitude of the vector and the sine of the angle in which they subtend each other. |
|The output is a scalar. | 	The output is a vector. |
| ab cos theta | ab sin theta  |


![DIFFERENCE](https://www.vedantu.com/question-sets/f8c38a91-d7eb-4b1a-a8f7-1c46eb4679c58606503569967698205.png)


When `a.b = 0` means angle between them `theta = 90`
When `a.b = |a||b|` means angle between them `theta = 0`

***CODE FOR DOT PRODUCT***
```
int dotProduct(int vect_A[], int vect_B[])
{
    int product = 0;
    for (int i = 0; i < n; i++)
    {
        product = product + vect_A[i] * vect_B[i];
    }
    return product;
}
```

*SQUARE ROOT OF A NUMBER:* $$\sqrt{x}$$

**MATHS EXPRESSIONS**
$$\left( \sum_{k=1}^n a_k b_k \right)^2 \leq \left( \sum_{k=1}^n a_k^2 \right) \left( \sum_{k=1}^n b_k^2 \right)$$



[^1]: import numpy as np
Taking two scalar values
a = 5
b = 7
print(np.dot(a, b))


