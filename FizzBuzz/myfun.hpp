
bool DivideByThree(int n)
{
	return n % 3 == 0;
}

bool DivideByFive(int n)
{
	return n % 5 == 0;
}

bool IncludeThree(int n)
{
	if ((n % 10 == 3) || (n / 10 == 3))
		return true;
	return false;
}