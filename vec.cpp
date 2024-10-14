#include <bits/stdc++.h>
using namespace std;

int dotProduct(int vecA[], int vecB[])
{
    int product = 0;
    for (int i = 0; i < 3; i++)
        product = product + vecA[i]*vecB[i];
    return product;
}

int main()
{	
   
    int vecA[] = {4, -5, 4};
    int vecB[] = {2, 6, 5};
    
    cout << "DOT PRODUCT: ";
    cout << dotProduct(vecA, vecB) << endl;

    return 0;
}

