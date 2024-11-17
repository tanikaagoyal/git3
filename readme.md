# ABHYUDAYA TAK 2023ucp1602 
## TECHNICAL WRITING ASSIGNMENT (LAB 4)  
### VECTOR CROSS PRODUCT  

*Vector is a quantity that has both magnitude and direction. Several mathematical operations can be performed on vectors, such as addition and multiplication. The multiplication of vectors can be done in two ways: dot product and cross product.*  
>This text has been adapted from [Byjus](https://byjus.com/maths/cross-product-of-two-vectors/).  

**The cross product of two vectors is the product of the magnitudes of the vectors and the sine of the angle between them, resulting in a vector that is perpendicular to the plane containing the two vectors:**  
\[ \mathbf{a} \times \mathbf{b} = |\mathbf{a}| |\mathbf{b}| \sin \theta \, \hat{n} \]  
Where:
- *|\(\mathbf{a}\)|* and *|\(\mathbf{b}\)|* are the magnitudes of vectors *\(\mathbf{a}\)* and *\(\mathbf{b}\)*.
- *θ* is the angle between the two vectors.
- *\(\hat{n}\)* is the unit vector perpendicular to both *\(\mathbf{a}\)* and *\(\mathbf{b}\)*, following the right-hand rule.

![CROSS PRODUCT OF TWO VECTORS](https://cdn1.byjus.com/wp-content/uploads/2022/09/Cross-Product-Of-Two-Vectors-1.png)

#### Special Cases:
- *When the angle θ between the vectors is 0°* (i.e., the vectors are parallel), the cross product is *0* (no perpendicular vector).
- *When the angle θ is 90°* (i.e., the vectors are perpendicular), the magnitude of the cross product is *|\(\mathbf{a}\)| |\(\mathbf{b}\)|*.
- *When the vectors are in the same direction* (i.e., θ = 0°), the result is a *zero vector*.

---

### WHAT HAVE WE LEARNED SO FAR?

- [x] What is the cross product?
- [x] How to compute it?
- [ ] Properties of cross product  

*Cross Product Properties of Vectors:*

| *Property*                         | *Explanation*                                                                                             |
|:------------------------------------:|:-----------------------------------------------------------------------------------------------------------|
| *Non-Commutativity*                | The cross product is *not commutative*, meaning:                                                        \[ \mathbf{a} \times \mathbf{b} \neq \mathbf{b} \times \mathbf{a} \] |
| *Magnitude*                        | The magnitude of the cross product is given by:                                                         \[ |\mathbf{a} \times \mathbf{b}| = |\mathbf{a}| |\mathbf{b}| \sin \theta \] |
| *Zero Cross Product*               | If *\(\mathbf{a} \times \mathbf{b} = 0\)*, it implies that the vectors are either parallel or anti-parallel, or one of the vectors is a zero vector. |
| *Distributivity*                   | The cross product follows the distributive property: \[ \mathbf{a} \times (\mathbf{b} + \mathbf{c}) = \mathbf{a} \times \mathbf{b} + \mathbf{a} \times \mathbf{c} \] |
| *Cross Product with Itself*        | The cross product of a vector with itself is always *0*: \[ \mathbf{a} \times \mathbf{a} = 0 \] |

---

### CODE FOR CROSS PRODUCT

To calculate the cross product of two vectors in *C*, the following function can be used:

```c
#include <stdio.h>

void crossProduct(int vect_A[], int vect_B[], int result[]) {
    result[0] = vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1];
    result[1] = vect_A[2] * vect_B[0] - vect_A[0] * vect_B[2];
    result[2] = vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0];
}

int main() {
    int vect_A[3] = {1, 2, 3};
    int vect_B[3] = {4, 5, 6};
    int result[3];
    
    crossProduct(vect_A, vect_B, result);
    
    printf("Cross Product: (%d, %d, %d)\n", result[0], result[1], result[2]);
    return 0;
}
