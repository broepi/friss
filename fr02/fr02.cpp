
bool pruefe(char byte, char *byteset, int count)
{
	for( ; count>0; count--) {
		if(byte == byteset[count-1]) return true;
	}
	return false;
}