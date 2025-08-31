string hexatable = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";  
// A lookup table containing digits for bases up to 36 (0-9 and A-Z)

// Function to convert a number n into a given base
auto convert(int n, int base) {
    string ans;  // To store the converted number (in reverse order)
    
    while(n) {  
        // Take remainder when dividing by base to get the current digit
        ans += hexatable[n % base];  
        // Move to the next digit
        n /= base;  
    }
    
    return ans;  // Note: Digits are appended in reverse order
}
