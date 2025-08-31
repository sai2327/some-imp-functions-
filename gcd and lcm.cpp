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

/*
2. Least Common Multiple (LCM)
   - Smallest number divisible by both a and b.
   - Can use: lcm(a,b) in <numeric> (C++17 and above).
*/
int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
