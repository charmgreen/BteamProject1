
class Cal
{
public:
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