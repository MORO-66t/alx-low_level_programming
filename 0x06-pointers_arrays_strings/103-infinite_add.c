#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;
    int len1 = 0, len2 = 0;
    int i, j, sum, temp;

    /* Calculate the lengths of the input numbers */
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    /* Ensure that the result will fit in the buffer */
    if (size_r <= len1 || size_r <= len2)
        return 0;

    /* Start adding from the rightmost digit and move left */
    i = len1 - 1;
    j = len2 - 1;
    r[size_r - 1] = '\0';

    /* Loop to add digits from both numbers */
    while (i >= 0 || j >= 0 || carry)
    {
        /* Convert characters to integers and add */
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        /* Update carry for the next iteration */
        carry = sum / 10;

        /* Store the result in the buffer */
        r[size_r - 2] = (sum % 10) + '0';
        size_r--;

        /* Move to the next digit */
        i--;
        j--;
    }

    /* Check if the result is too large for the buffer */
    if (size_r <= 0)
        return 0;

    /* Shift the result to the beginning of the buffer */
    temp = size_r;
    while (temp <= len1 + len2)
    {
        r[temp - 1] = r[temp];
        temp++;
    }

    return r;
}
