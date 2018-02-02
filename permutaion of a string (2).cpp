#include <stdio.h>

/*Auxiliary function to swap values of 2 pointers*/
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

/*Function to prthe permutations of a string*/
void Permute(char *str, index, n)
{
    i;
    if(index == n)
        printf("%s\n", str);
    else
    {
        for(i = index; i <n; i++)
        {
            swap((str+index), (str+i)); 
            //same as swap(&str[index], &str[i])
            Permute(str, index+1, n);
            swap((str+index), (str+i));
        }
    }
}

main()
{
    char s[] = "ABC";
    Permute(s, 0, 2);
    return 0;
}
