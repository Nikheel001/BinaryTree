struct bintree *delete_it(char ch1,struct bintree *ptr)
{
	if (ptr == NULL) return ptr;
	if (ch1 < ptr->ch)
		ptr->lch = delete_it(ch1,ptr->lch);
	else if (ch1 > ptr->ch)
		ptr->rch = delete_it(ch1,ptr->rch);
	else
	{
		if (ptr->lch == NULL)
		{
			struct bintree *temp = ptr->rch;
			free(ptr);
			return temp;
		}
		else if (ptr->rch == NULL)
		{
			struct bintree *temp = ptr->lch;
			free(ptr);
			return temp;
		}
		struct bintree* temp = find_min(ptr->rch);
		ptr->ch = temp->ch;
		ptr->rch = delete_it(temp->ch,ptr->rch);
	}
	return ptr;
}
