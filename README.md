# 42_libft

## How to transfer files from one git repo to another repo
1. move into the directory(ies) and type ```rm -rf .git```
2. if there are any existing files with the old repo address type ```git rm -r --cached myFolder```
3. ```git commit -m "comments..."```
4. ```git push```

/*

1) to what lengths do you go to replicate the exact functionality in edge cases beyond the scope of the original function
2) how do you think about constructing your edge case testing

void pointers don't have size
casting stuff

*/

bzero (void *s, size_t n)
{
	int i;
	char *mem;

	i = 0;
	mem = (char*) s; // need to cast void pointers to char pointers before using them...
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
}

// if you set all bits of a pointer to 0 it will point to NULL
// you can't cast to int pointers in C... C can manipulate memory with char pointers ONLY

// memset in the stdlib is different... a macro, so will figure out if its out of bounds and cause an abort.. when you're testing your own function just 

#include <libft.h> // will help you compare protype file names

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 1;
	while(false)
	{
		// blah blah blah
		i++;
	}
	return ((char*)&s[i]);
}

// what is a const? --> need to go back and add this!

// they will probably replace libft.h

// filecheck.py --> go through and make sure you have all of your files, will check your prototypes as well

// make file sooner rather than later...

// differences between mem and strcpy... in memcpy need to use the length because there is no null terminator... also need to add null terminator for strcpy... also need to cast as unsigned char*

// memccpy: looks until it finds a match... need to deal with -/+1 based on stuff

// strcmp: cast as unsigned chars to fix

// ft_strlcat test... doesn't check for null terminator at the end

// good to ask the about how they write their test cases

/*

1. you need to worry about casting, especially with memory
2. you can test against standard library
3. implementation vs. usage (need to know both)...

*/

