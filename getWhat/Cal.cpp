
class Cal
{
public:
    int getMinus(int a, int b) {
      return a - b;
    }
    int getSum(int a, int b)
    {
        return a + b;
    }
    int getSumSum(int a, int b, int c)
    {
        return a + b + c;
    }
	  int getGop(int a, int b)
	  {
		    return a * b;
	  }
	int getDivide(int a, int b)
	{
		if (b == 0)
		{
			// Divide by Zero 회피를 위해 int max, min으로 return.
			return (a >= 0) ? ((int)2147483647) : ((int)-2147483648);
		}
		return (a / b);
	}
};