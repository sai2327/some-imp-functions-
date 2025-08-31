/*
1. Greatest Common Divisor (GCD)
   - Finds the largest number that divides both a and b.
   - Inbuilt function: __gcd(a,b) (from <algorithm>).
*/
int gcd(int a,int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
// Recursive GCD function
int gcd(int a, int b) {
    if(b == 0) return a;   // base case
    return gcd(b, a % b);  // recursive step
}


/*
2. Least Common Multiple (LCM)
   - Smallest number divisible by both a and b.
   - Can use: lcm(a,b) in <numeric> (C++17 and above).
*/
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
 // 1. GCD using inbuilt __gcd
    cout << "gcd(24, 36) = " << __gcd(24,36) << endl; // 12

    // 2. LCM using inbuilt lcm (C++17 and above, needs <numeric>)
    cout << "lcm(12, 18) = " << lcm(12,18) << endl;   // 36
