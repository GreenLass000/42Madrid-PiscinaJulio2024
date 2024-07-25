/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:08:11 by marcnava          #+#    #+#             */
/*   Updated: 2024/07/24 16:36:48 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	extra;

	extra = *a;
	*a = *a / *b;
	*b = extra % *b;
}
/* int main()
{
    int num1 = 11;
    int num2 = 3;

    printf("Before: num1 = %d, num2 = %d\n", num1, num2);
    ft_ultimate_div_mod(&num1, &num2);
    printf("After: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
} */