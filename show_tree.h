void show_tree(struct bintree *ptr)
{
	while(ptr != '\0')
	{
		show_tree(ptr->lch);
		printf("%c\n",ptr->ch);
		show_tree(ptr->rch);
		
		if(ptr >= rptr)
			return;
	}
	if(ptr == '\0')
	{
		if(ptr == rptr)
			printf("Empty tree\n");
	}
	return;
}
