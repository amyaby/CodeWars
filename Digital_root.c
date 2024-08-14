int quotion(long int n)
{
    int s = 0;
    while(n >= 10)
    {
        int x = n /10;
        int y = n %10;
        s += y;
        n = x;
    }
    s +=n;
    return s;
}
int digital_root(int n)
{
    while(n >= 10)
    {
        n =  quotion(n);
    }
return n;
}