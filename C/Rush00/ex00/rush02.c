/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amramcil <ramcilovicamin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:02:25 by amramcil          #+#    #+#             */
/*   Updated: 2025/02/09 15:15:16 by amramcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == x - 1) || (j == 0 && i == 0))
				ft_putchar('A');
			else if ((i == y - 1 && j == x - 1) || (j == 0 && i == y - 1))
				ft_putchar('C');
			else if ((i == 0 || i == y - 1) || (j == 0 || j == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
