/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amramcil <ramcilovicamin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:35:15 by britela-          #+#    #+#             */
/*   Updated: 2025/02/09 15:08:57 by amramcil         ###   ########.fr       */
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
			if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_putchar('o');
			else if (i == 0 || i == y - 1)
				ft_putchar('-');
			else if (j == 0 || j == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
