
bool pruefe(char byte, char *byteset, int count);

int und_jetzt(char *start, int length, char *byteset, int count)
{
	int i;
	for(i=0; i<length && pruefe(start[i], byteset, count); i++);
	return i;
}
