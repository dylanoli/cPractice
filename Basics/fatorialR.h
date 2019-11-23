double fatorialR(double num);
double fatorialR(double num)
{
    if (num>1)
    {
        num *= fatorialR(num -1);
        return num;  
    }
    else
    {
        return 1;   
    }    
}