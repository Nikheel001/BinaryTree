struct bintree *ins_op(char ch1,struct bintree *ptr)
{	
	if(ptr == '\0')
	{
		ptr = (struct bintree *)malloc(sizeof(struct bintree));
		ptr->ch = ch1;
		printf("inserted %c \n",ch1);
		ptr->lch = '\0';
		ptr->rch = '\0';
		return ptr;
	}
	else
	{
		while(ptr != '\0')
		{	
			if(ch1 >= ptr->ch)
				ptr->rch = ins_op(ch1,ptr->rch);
			
			if(ch1 < ptr->ch)
				ptr->lch = ins_op(ch1,ptr->lch);			
			
			if(ptr >= rptr)
			{
				return ptr;
			}
		}
	}
}
