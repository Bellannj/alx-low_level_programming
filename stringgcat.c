/**
 * _mystringcat - function that  concatinates two strings
 *
 */
char *_mystringcat(char *firststr, const char *secstr)
{
	size_t len1, len2;
	char *result;
	int i, j;

	len1 = strlen(firststr);
	len2 = strlen(secstr);
	j = len1 + len2 - 1;
	if (firststr == NULL && secstr == NULL)
	{
		perror("both string are empty");
		exit(EXIT_FAILURE);
	}
	if (secstr == NULL)
		return (firststr);
	if (firststr == NULL && secstr != NULL)
	{
		firststr = (char *)malloc(len2);
		if (firststr == NULL)
		{
			perror("memory allocation fail");
			exit(EXIT_FAILURE);
		}
		strcpy(firststr, secstr);
		return (firststr);
		free(firststr);
	}
	if (firststr != NULL && secstr != NULL)
	{
		result = (char *)malloc(j);
		if (result == NULL)
		{
			perror("memory allocation fail");
			exit(EXIT_FAILURE);
		}
		strcpy(result, firststr);
		for(i = 0; (secstr[i] != '\0'); i++)
			result[len1++] = secstr[i];
		return (result);
		free(result);
	}
}
