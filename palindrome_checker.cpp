//Palindrome checker 

bool isPalindrome(int x) {
    long int r,n,t=10;
    long int i;
    n=x;
    for(i=0;n>0;)
    {
        r=n%10;
        i=i*t + r;
        n/=10;
    }
    if(i==x)
    return true;
    else
    return false;

}
