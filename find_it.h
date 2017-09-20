struct bintree *key = '\0';
struct bintree *pr_find(char ch1,struct bintree *ptr)
{
	if(ptr == '\0')
	{
		if(ptr == rptr)
			printf("Empty tree\n");
		else
			return '\0';
	}
	key = ptr;
	if(ptr->ch == ch1)
		return key;
	else
	{
		key = pr_find(ch1,ptr->lch);
		if(key != '\0')
			return key;

		key = pr_find(ch1,ptr->rch);
		if(key != '\0')
			return key;
	}
	return '\0';
}

void find_it(char ch1,struct bintree *ptr)
{
	ptr = pr_find(ch1,rptr);

	if(ptr != '\0')
		printf("%c Found\n",ptr->ch);
	else
		printf("%c Not found\n",ch1);
}
