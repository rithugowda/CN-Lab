BEGIN {c=0;}
{
	if($1=="d")
	{
		c++;
		printf("%s\t%s\n",$5,$11);
	}
}
END{ printf("The number of paackets dropped=%d\n",c); }
