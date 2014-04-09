
bool strecke (char *str1, char *str2, int count)
{
	for( ; count>0; count--) {
		if(str1[count-1]!=str2[count-1]) return false;
	}
	return true;
}
