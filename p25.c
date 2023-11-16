void main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}int addbyone(int &xref)
{
	xre++;
	printf("xref=%d\n", xref);
	return xref;
}

