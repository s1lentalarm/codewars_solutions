int		summation(int num)
{
	int out;

	out = 0;
	while (num > 0)
		out += num--;
	return (out);
}

