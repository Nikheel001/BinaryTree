struct bintree *find_min(struct bintree *ptr)
{
	if(ptr == '\0')
		return ptr;

	while(ptr->lch != '\0')
		ptr = ptr->lch;

	return ptr;
}

struct bintree *find_par(struct bintree *ptr)
{
	struct bintree *ptr2 = rptr;
	struct bintree *cptr = '\0';

	while(ptr2 != '\0')
	{
		cptr = ptr2;
		if(ptr2->ch > ptr->ch)
			ptr2 = ptr2->lch;

		if(ptr2->ch < ptr->ch)
			ptr2 = ptr2->rch;

		if(ptr2->ch == ptr->ch)
			return cptr;
	}
}

int has_chld(struct bintree *ptr)
{
	int count = 2;
	if(ptr->lch == '\0')
		count--;
	if(ptr->rch == '\0')
		count--;
	return count;
}
